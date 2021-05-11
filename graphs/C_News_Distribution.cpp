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
vector<int> a[500001];
bool vis[500001];
int users;
int par[500001];

int dfs(int src, int parent)
{
    vis[src] = true;
    par[src] = parent;
    users++;
    for (auto i : a[src])
        if (!vis[i])
            dfs(i, parent);
    return users;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        vis[i] = false;
    int x;
    int y[500001];
    rep(i, m)
    {
        cin >> x;
        rep(i, x)
        {
            cin >> y[i];
        }
        for (int i = 0; i < x - 1; i++)
        {
            a[y[i]].pb(y[i + 1]);
            a[y[i + 1]].pb(y[i]);
        }
    }
    int ans = 0, cnt[n + 1];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            users = 0;
            ans = dfs(i, i);
            cnt[i] = ans;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        // cout<<par[i]<<" ";
        if (cnt[i])
            cout << cnt[i] << " ";
        else
        {
            cout << cnt[par[i]] << " ";
        }
    }

    return 0;
}