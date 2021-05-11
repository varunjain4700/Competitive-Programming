#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 1; i <= n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        int a[200001] = {0};
        rep(i, n)
        {
            cin >> a[i];
        }
        unordered_map<int, int> m;
        rep(i, n)
        {
            m[a[i]]++;
        }
        ll c = 0;
        int flag = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 1)
            {
                c = i->first;
                flag = 1;
                break;
            }
        }
        ll j = 0;
        rep(i, n)
        {
            if (a[i] == c)
            {
                j = i;
                break;
            }
        }
        if (flag)
        {
            cout << j << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}