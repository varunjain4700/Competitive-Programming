#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        ll ans = 0;
        while (n != 1)
        {
            if (n == 2)
            {
                ans++;
                n--;
            }
            else if (n != 2 && n % 2 == 0)
            {
                ans++;
                n = 2;
            }
            else
            {
                n--;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}