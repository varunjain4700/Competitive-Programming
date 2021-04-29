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
int j = 1;

void solve()
{
    string s, t, ss;
    cin >> s;
    ss = s;
    int n = s.size();
    int x = 0;
    rep(i, n)
    {
        int a = (s[i] - '0') % 10;
        if (a == 4)
        {
            s[i]--;
            if (s[i] == '4')
            {
                s[i]--;
                t += "2";
            }
            else
                t += "1";
            x = 1;
        }
        else if (x == 1)
        {
            t += "0";
        }
    }
    if (x == 0)
    {
        t+="0";
        // if (s[0] == '1')
        // {
        //     if (s[1] == '0')
        //     {
        //         s.clear();
        //         s += "9";
        //         for (int i = 2; i < n; i++)
        //             s += ss[i];
        //         t += "1";
        //         for (int i = 2; i < n; i++)
        //             t += "0";
        //     }
        //     else
        //     {
        //         s[1]--;
        //         if (s[1] == '4')
        //         {
        //             s[1]--;
        //             t += "2";
        //         }
        //         else
        //             t += "1";
        //         for (int i = 2; i < n; i++)
        //             t += "0";
        //     }
        // }
        // else
        // {
        //     s[0]--;
        //     if (s[0] == '4')
        //     {
        //         s[0]--;
        //         t += "2";
        //     }
        //     else
        //         t += "1";
        //     for (int i = 1; i < n; i++)
        //         t += "0";
        // }
    }
    cout << "Case #" << j << ": " << s << " " << t << endl;
    j++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}