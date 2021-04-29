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
    int a, b, n;
    string s;
    cin >> a >> b >> s;
    n = a + b;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != '?' && s[n - i - 1] != '?')
        {
            if (s[i] != s[n - i - 1])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            cnt++;
        else if (s[i] == '0')
            a--;
        else
            b--;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != '?' && s[n - i - 1] == '?')
        {
            s[n - i - 1] = s[i];
            if (s[i] == '0')
                a--;
            else
                b--;
            cnt--;
        }
        else if (s[n - i - 1] != '?' && s[i] == '?')
        {
            s[i] = s[n - i - 1];
            if (s[i] == '0')
                a--;
            else
                b--;
            cnt--;
        }
        if (a < 0 || b < 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    //cout<<s<<endl;
    bool f = 0;
    if (cnt % 2 == 0)
    {
        if (a % 2 == 1 || b % 2 == 1)
            f = 1;
    }
    if (f)
    {
        cout << -1 << endl;
    }
    else
    {
        if (n % 2 == 1 && s[n / 2] == '?')
        {
            if (a % 2 == 1)
            {
                s[n / 2] = '0';
                a--;
            }
            else
            {
                s[n / 2] = '1';
                b--;
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '?')
            {
                if (a >= 2)
                {
                    s[i] = s[n - i - 1] = '0';
                    a -= 2;
                }
                else if (b >= 2)
                {
                    s[i] = s[n - i - 1] = '1';
                    b -= 2;
                }
            }
        }
        cout << s << endl;
    }
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