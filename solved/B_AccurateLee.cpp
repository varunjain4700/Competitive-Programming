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
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.pb(s[i] - '0');
        }
        int x = 0, k;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1 && x == 1)
            {
                //  cout<<i<<" "<<k<<endl;
                v.erase(v.begin() + i + 1, v.begin() + k + 1);
                v[i] = 0;
                i++;
                x = 0;
                continue;
            }
            else if (v[i] == 0)
            {
                if (x == 1)
                    continue;
                k = i;
                x = 1;
            }
        }
        n = v.size();
        for (int i = 0; i < n; i++)
            cout << v[i];
        cout << endl;
    }
    return 0;
}