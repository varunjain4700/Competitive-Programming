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
vector<int> a[30001];
bool vis[30001];

void dfs(int src)
{
    vis[src] = true;
    for (auto i : a[src])
    {
        if (!vis[i])
            dfs(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int x[n + 1];
    rep(i, n - 1)
            cin >>
        x[i];
    for (int i = 1; i <= n; i++)
    {
        vis[i] = false;
        a[i].clear();
    }
    for (int i = 1; i < n; i++)
    {
        a[i].pb(i + x[i - 1]);
    }
    dfs(1);
    // for(int i=1;i<=n;i++)
    //     cout<<vis[i]<<" ";
    if (vis[k])
        cout << "YES";
    else
    {
        cout << "NO";
    }

    return 0;
}