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
        char s[101];
        cin >> s;
        int n = strlen(s);
        if (n % 2 != 0)
            cout << "NO" << endl;
        else
        {
            int op, cl;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '(')
                    op = i;
                if (s[i] == ')')
                    cl = i;
            }
            int first, last;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '?')
                {
                    first = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == '?')
                {
                    last = i;
                    break;
                }
            }
            if (op < cl || (first < cl && last > op))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}