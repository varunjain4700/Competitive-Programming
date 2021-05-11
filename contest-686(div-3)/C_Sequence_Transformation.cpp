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
        vector<int> a;
        int x;
        rep(i, n)
        {
            cin >> x;
            a.push_back(x);
        }
        int m = unique(a.begin(), a.end()) - a.begin();
        a.resize(m);
        vector<int>::iterator it;
        map<int, int> mp;
        int ans = INT_MAX;
        mp[a[0]]--;
        mp[a[m - 1]]--;
        for (int i = 0; i < m; i++)
        {
            mp[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            ans = min(ans, mp[a[i]] + 1);
        }
        cout << ans << endl;
    }
    return 0;
}