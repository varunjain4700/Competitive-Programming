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
        cin >> n;
        vector<int> a;
        multiset<int> s, t;
        int x;
        rep(i, 2 * n)
        {
            cin >> x;
            a.pb(x);
            s.insert(x);
            t.insert(x);
        }
        sort(a.begin(), a.end());
        multiset<int>::iterator it;
        vector<pair<int, int>> v;
        int sum = 0, num1;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            sum = a[i] + a[2 * n - 1];
            x = a[2 * n - 1];
            s = t;
            v.pb(mp(a[i], a[2 * n - 1]));
            s.erase(s.find(a[i]));
            s.erase(s.find(a[2 * n - 1]));
            while (v.size() != n)
            {
                it = s.end();
                it--;
                num1 = *it;
                s.erase(s.find(num1));
                it = s.find(x - num1);
                if (it != s.end())
                {
                    v.pb(mp(*it, num1));
                    s.erase(s.find(*it));
                    x = num1;
                }
                else
                    break;
            }
            if (v.size() != n)
                v.clear();
            else
                break;
        }
        if (v.size() == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << sum << endl;
            vector<pair<int, int>>::iterator it1;
            for (it1 = v.begin(); it1 != v.end(); it1++)
                cout << it1->first << " " << it1->second << endl;
        }
    }
    return 0;
}