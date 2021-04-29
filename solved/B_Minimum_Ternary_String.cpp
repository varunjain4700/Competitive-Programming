#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    string s, t;
    cin >> s;
    int n = s.size();
    int idx = 0,flag=0;;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            idx = i;
            flag=1;
            break;
        }
        else if (s[i] == '0')
        {
            t += "0";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            t += "1";
        }
    }
    if (flag)
    {
        for (int i = idx; i < n; i++)
        {
            if (s[i] != '1')
                t += s[i];
        }
    }
    cout << t << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}