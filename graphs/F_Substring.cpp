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
vector<int> edges[300001];
int indegree[300001];
vector<int> top_sort;

void solve()
{
    int n, m;
    string s;
    cin >> n >> m >> s;
    int x, y;
    rep(i, m)
    {
        cin >> x >> y;
        x--;
        y--;
        edges[x].pb(y);
        indegree[y]++;
    }
    queue<int> q;
    rep(i, n)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    int cnt = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        top_sort.pb(v);
        cnt++;
        for (int i : edges[v])
        {
            indegree[i]--;
            if (indegree[i] == 0)
                q.push(i);
        }
    }
    if (cnt < n)
    {
        cout << -1;
        return;
    }
    else
    {
        // for(int i:top_sort)
        //     cout<<i<<" ";
        int dp[n + 1], ans = 0;
        for (char a = 'a'; a <= 'z'; a++)
        {
            memset(dp, 0, sizeof(dp));
            for (int i : top_sort)
            {
                if (s[i] == a)
                    dp[i]++;
                for (int x : edges[i])
                    dp[x] = max(dp[x], dp[i]);
                ans = max(ans, dp[i]);
            }
        }
        cout << ans;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}