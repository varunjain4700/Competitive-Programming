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
vector<int> adj[5001];
bool vis[5001];
int dis[5001][5001];

void dfs(int src, int node, int d)
{
    vis[src] = true;
    dis[node][src] = d;
    // cout<<src<<"-"<<d<<endl;
    for (auto i : adj[src])
    {
        if (!vis[i])
        {
            dfs(i, node, d + 1);
        }
    }
}
void solve()
{
    int n, k, a, x, y;
    cin >> n >> k >> a;
    vector<int> f;
    rep(i, k)
    {
        cin >> x;
        f.pb(x);
    }
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        adj[i].clear();
    }
    rep(i, n - 1)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    memset(dis, 0, sizeof(dis));
    for (int i = 1; i <= n; i++)
    {
        dfs(i, i, 0);
        memset(vis, 0, sizeof(vis));
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++){
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> res1, res2;
    int temp = 0, ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        ans = INT_MIN;
        for (int j = 0; j < k; j++)
        {
            temp = dis[a][f[j]] - dis[i][f[j]];
            if (temp > ans)
            {
                ans = temp;
                x = ans;
                y = f[j];
            }
        }
        res1.pb(x);
        res2.pb(y);
    }
    for (int i = 0; i < n; i++)
        cout << res1[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << res2[i] << " ";
    cout << endl;
    return;
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