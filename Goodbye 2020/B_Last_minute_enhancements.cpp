#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007
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
        int a[n + 1];
        rep(i, n)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] < 1)
            {
                cnt++;
                mp[a[i]]++;
            }
            else if (mp[a[i]] == 1 && mp[a[i] + 1] == 0)
            {
                cnt++;
                mp[a[i] + 1]++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}