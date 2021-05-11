#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define pb push_back

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
            a.pb(x);
        }
        char s[201];
        rep(i, 200)
            s[i] = 'a';
        cout << s << endl;
        rep(i, n)
        {
            if (s[a[i]] == 'b')
                s[a[i]] = 'a';
            else
                s[a[i]] = 'b';
            rep(j, 200)
            {
                cout << s[j];
            }
            cout << endl;
        }
    }
    return 0;
}