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
    int n, m, k;
    cin >> n >> m >> k;
    char a[n + 1][m + 1];
    char x;
    int empty=0;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
            if(a[i][j]=='.')
                empty++;
        }
    }
    if(k==1){
        cout<<empty<<endl;
        return;
    }
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
                cnt++;
            else
            {
                if (cnt >= k)
                    ans += cnt - k + 1;
                cnt = 0;
            }
            //cout<<cnt<<" ";
        }
        if (cnt >= k)
            ans += cnt - k + 1;
    }
    cnt=0;
    for (int i = 0; i < m; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == '.')
                cnt++;
            else
            {
                if (cnt >= k)
                    ans += cnt - k + 1;
                cnt = 0;
            }
            //cout<<cnt<<" ";
        }
        if (cnt >= k)
            ans += cnt - k + 1;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}