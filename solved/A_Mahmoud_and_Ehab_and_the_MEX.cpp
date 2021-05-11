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
    int n, x;
    //     cin >> tt;
    //    while(tt--){
    cin >> n >> x;
    int a[n + 1];
    rep(i, n)
            cin >>
        a[i];
    sort(a, a + n);
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
            cnt++;
        else if (a[i] == x)
            ans++;
        else
            break;
    }
    ans += x - cnt;
    cout << ans << endl;

    //    }
    return 0;
}