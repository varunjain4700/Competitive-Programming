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
        char s[100001], t[100001];
        cin >> n;
        cin >> s;
        // n=strlen(s);
        t[0] = '1';
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] - '0' + t[i - 1] - '0' == 2)
            {
                if (s[i] == '0')
                    t[i] = '1';
                else
                    t[i] = '0';
            }
            else if (s[i - 1] - '0' + t[i - 1] - '0' == 1)
            {
                if (s[i] == '0')
                    t[i] = '0';
                else
                    t[i] = '1';
            }
            else
            {
                if (s[i] == '0')
                    t[i] = '1';
                else
                    t[i] = '1';
            }
        }
        cout << t << endl;
    }
    return 0;
}