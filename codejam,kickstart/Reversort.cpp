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

void solve()
{
    tc++;
    ll n, ans = 0;
    cin >> n;
    int x;
    vector<int> list;
    rep(i, n)
    {
        cin >> x;
        list.pb(x);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int j;
        for (j = i; j < n; j++)
        {
            if (list[j] == i + 1)
            {
                break;
            }
        }
        reverse(list.begin() + i, list.begin() + j + 1);
        ans += j - i + 1;
    }

    cout << "Case #" << tc << ": " << ans << endl;
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