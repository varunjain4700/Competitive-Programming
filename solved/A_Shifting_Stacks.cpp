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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        ll a[n + 1];
        rep(i, n)
                cin >>a[i];
        ll x;
        int i;
        for (i = 0; i < n - 1; i++)
        {
            x = a[i] - i;
            a[i] = i;
            a[i + 1] += x;
            if (a[i + 1] <= a[i])
                break;
        }
        // cout<<i;
        if (i == n - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}