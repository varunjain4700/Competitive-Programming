#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, k;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> k;
        int a[n + 1];
        vector<int> w;
        rep(i, n)
                cin >>a[i];
        vector<int> v;
        int x;
        rep(i, k)
        {
            cin >> x;
            if (x == 1)
                v.pb(x);
            else
                w.pb(x);
        }
        int m = w.size();
        sort(a, a + n);
        sort(w.begin(), w.end());
        reverse(w.begin(), w.end());
        ll ans = 0;
        int index = 0;
        int i = 0, j = n - 1;
        int t = v.size();
        for (int i = 0; i < t; i++)
        {
            ans += 2 * a[j];
            j--;
        }
        while (i <= j)
        {
            ans += a[i] + a[j];
            j--;
            i += w[index] - 1;
            index++;
        }
        cout << ans << endl;
    }
    return 0;
}