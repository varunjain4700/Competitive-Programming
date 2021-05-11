#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, m, k;
    //cin >> tt;
    //while(tt--){
    cin >> n >> m >> k;
    ll t[1001] = {0};
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        ll sum = 0;
        for (int j = 1; j <= k + 1; j++)
        {
            cin >> t[j];
            sum += t[j];
        }
        sum -= t[k + 1];
        if (t[k + 1] <= 10 && sum >= m)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    // }
    return 0;
}