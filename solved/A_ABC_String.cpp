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
    t = s;
    int n = s.size();
    char a = s[0];
    char b = s[n - 1];
    if (a == b)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == a)
                s[i] = '(';
            else if (s[i] == b)
                s[i] = ')';
            else
            {
                s[i] = '(';
            }
        }
        //cout<<s<<endl;
        int op = 0, cl = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                op++;
            else
            {
                if (op > 0)
                    op--;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0 && op == 0 && cl == 0)
        {
            cout << "YES" << endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (t[i] == a)
                s[i] = '(';
            else if (t[i] == b)
                s[i] = ')';
            else
            {
                s[i] = ')';
            }
        }
        //cout<<s<<endl;
        op = 0, cl = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                op++;
            else
            {
                if (op > 0)
                    op--;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0 && op == 0 && cl == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
            cout << "NO" << endl;
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