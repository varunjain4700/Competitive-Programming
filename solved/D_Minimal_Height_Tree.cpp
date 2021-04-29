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
vector<int> adj[200001];
bool vis[200001];
int dis[200001];

void bfs(int src)
{
  memset(dis, 0, sizeof(dis));
  memset(vis, false, sizeof(vis));
  vis[src] = true;
  queue<int> q;
  q.push(src);
  dis[src] = 0;
  int ans = 0;
  while (!q.empty())
  {
    int x = q.front();
    //cout << x << " ";
    q.pop();
    for (int i : adj[x])
    {
      if (!vis[i])
      {
        vis[i] = true;
        q.push(i);
        dis[i] = dis[x] + 1;
        ans = max(ans, dis[i]);
      }
    }
  }
  cout << ans << endl;
}

void solve()
{
  int n;
  cin >> n;
  int a[n + 1];
  rep(i, n)
  {
    cin >> a[i];
  }
  for(int i=1;i<=n;i++)
  {
    adj[i].clear();
  }
  queue<int> q;
  q.push(a[0]);
  for (int i = 1; i < n; i++)
  {
    int x = q.front();
    if (a[i] > a[i - 1])
    {
      adj[x].pb(a[i]);
    }
    else
    {
      q.pop();
      x = q.front();
      adj[x].pb(a[i]);
    }
    q.push(a[i]);
  }
  bfs(1);
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