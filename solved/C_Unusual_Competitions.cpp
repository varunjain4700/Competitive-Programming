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
    int n;
    string s;
    cin >> n >> s;
    int op = 0, cl = 0;
    rep(i, n)
    {
        if (s[i] == '(')
            op++;
        else if (s[i] == ')')
            cl++;
    }
    if (op != cl)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        op = 0, cl = 0;
        int ans = 0;
        rep(i, n)
        {
            if (s[i] == '(')
            {
                if (cl > op)
                {
                    ans += 2;
                }
                op++;
            }
            else if (s[i] == ')')
                cl++;
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}