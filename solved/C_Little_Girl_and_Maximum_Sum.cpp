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
    ll tt, n, q;
    //     cin >> tt;
    //    while(tt--){
    cin >> n >> q;
    ll a[n + 5], l[q + 5], r[q + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    ll b[n + 5];
    memset(b, 0, sizeof(b));
    rep(i, q)
    {
        cin >> l[i] >> r[i];
        b[l[i]]++;
        b[r[i] + 1]--;
    }
    for (int i = 1; i <= n; i++)
        b[i] += b[i - 1];
    sort(b + 1, b + n + 1, greater<ll>());
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += b[i] * a[i];
    }
    cout << ans << endl;

    //    }
    return 0;
}