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
    ll tt, n, m;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> m;
        char s[11][11];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> s[i][j];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i & 1) != 1)
                {
                    if ((j & 1) != 1)
                    {
                        if (s[i][j] == '.')
                            ans++;
                    }
                    else
                    {
                        if (s[i][j] == '*')
                            ans++;
                    }
                }
                else
                {
                    if ((j & 1) != 1)
                    {
                        if (s[i][j] == '*')
                            ans++;
                    }
                    else
                    {
                        if (s[i][j] == '.')
                            ans++;
                    }
                }
            }
        }
        int ans1 = 0;
        if (((m * n) & 1) != 1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if ((i & 1) == 1)
                    {
                        if ((j & 1) != 1)
                        {
                            if (s[i][j] == '.')
                                ans1++;
                        }
                        else
                        {
                            if (s[i][j] == '*')
                                ans1++;
                        }
                    }
                    else
                    {
                        if ((j & 1) != 1)
                        {
                            if (s[i][j] == '*')
                                ans1++;
                        }
                        else
                        {
                            if (s[i][j] == '.')
                                ans1++;
                        }
                    }
                }
            }
            //  cout<<ans<<" "<<ans1<<endl;
            ans = min(ans, ans1);
        }
        cout << ans << endl;
    }
    return 0;
}