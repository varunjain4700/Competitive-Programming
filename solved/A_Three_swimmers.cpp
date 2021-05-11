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
    ll tt, n, a, b, c;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> a >> b >> c;
        ll ta = (ll)ceil((double)n / a);
        ll tb = (ll)ceil((double)n / b);
        ll tc = (ll)ceil((double)n / c);
        ll ans = min(ta * a - n, min(tb * b - n, tc * c - n));
        cout << ans << endl;
    }
    return 0;
}