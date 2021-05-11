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
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        n = s.size();
        set<pair<pair<int, int>, pair<int, int>>> ss;
        int x = 0, y = 0;
        pair<int, int> p1, p2;
        int ans = 0;
        p2.first = 0;
        p2.second = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'E')
                x++;
            else
                x--;
            p1.first = x;
            p1.second = y;
            if (ss.count(make_pair(p1, p2)) || ss.count(make_pair(p2, p1)))
            {
                ans++;
            }
            else
            {
                ans += 5;
                ss.insert(make_pair(p1, p2));
            }
            p2.first = x;
            p2.second = y;
        }
        cout << ans << endl;
    }
    return 0;
}