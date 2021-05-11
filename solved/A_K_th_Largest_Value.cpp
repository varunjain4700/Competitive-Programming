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

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a, b;
    int y;
    rep(i, n)
    {
        cin >> y;
        a.pb(y);
        b.pb(y);
    }
    sort(b.begin(), b.end());
    int i;
    for (i = 0; i < n; i++)
    {
        if (b[i] == 1)
            break;
    }
    int idx = i;
    int t, x;
    rep(i, q)
    {
        cin >> t >> x;
        if (t == 1)
        {
            if (a[x - 1] == 1)
            {
                b[idx] = 0;
                a[x - 1] = 0;
                idx++;
            }
            else
            {
                b[idx - 1] = 1;
                a[x - 1] = 1;
                idx--;
            }
        }
        else
        {
            cout << b[n - x] << endl;
        }
    }
    // rep(i,n)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    // rep(i,n)
    //     cout<<b[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> tt;
    // while(tt--)
    solve();

    return 0;
}