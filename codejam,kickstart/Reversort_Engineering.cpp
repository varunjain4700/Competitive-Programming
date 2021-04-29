#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
ll tc = 0;
int costt[101];

void solve1(int n, int cost)
{
    if (cost >= 2 * n - 2)
    {
        costt[n] = n;
        if (n == 2)
        {
            return;
        }
        solve1(n - 1, cost - n);
    }
    else
    {
        costt[n] = 1;
        if (n == 2)
        {
            return;
        }
        solve1(n - 1, cost - 1);
    }
}

void solve()
{
    memset(costt, 0, sizeof(costt));
    tc++;
    int n, c;
    cin >> n >> c;
    vector<int> list, list1;
    ll ans = 0;
    solve1(n, c);
    // for (int i = 2; i <= n; i++)
    //     cout << costt[i] << " ";
    // cout << endl;
    if (costt[2] == 1)
    {
        list.pb(1);
        list.pb(2);
    }
    else
    {
        list.pb(2);
        list.pb(1);
    }
    for (int i = 3; i <= n; i++)
    {
        if (costt[i] == 1)
        {
            list.pb(i);
        }
        else
        {
            reverse(list.begin(), list.end());
            for (int i = 0; i < list.size(); i++)
                list[i]++;
            list.pb(1);
        }
        // rep(i,n){
        //     cout<<list[i]<<" ";
        // }
        // cout<<endl;
    }
    ll max_cost = (n * n + n - 2) / 2;
    ll min_cost = n - 1;
    if (c > max_cost || c < min_cost)
    {
        cout << "Case #" << tc << ": "
             << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << "Case #" << tc << ": ";
        rep(i, n)
        {
            cout << list[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}