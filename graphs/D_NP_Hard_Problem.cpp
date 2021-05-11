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
vector<int> a[100001];
bool vis[100001];
int group[100001];
int not_possible;

void bipartite(int src, bool g)
{
    vis[src] = true;
    group[src] = g;
    for (auto i : a[src])
    {
        if (!vis[i])
            bipartite(i, !g);
        else
        {
            if (group[i] == group[src])
            {
                not_possible = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        vis[i] = false;
    int x, y;
    rep(i, m)
    {
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    not_possible = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bipartite(i, 1);
            if (not_possible)
            {
                cout << -1;
                return 0;
            }
        }
    }
    int group1 = 0, group2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (group[i])
            group1++;
        else
        {
            group2++;
        }
    }
    cout << group1 << endl;
    for (int i = 1; i <= n; i++)
    {
        if (group[i])
            cout << i << " ";
    }
    cout << endl;
    cout << group2 << endl;
    for (int i = 1; i <= n; i++)
    {
        if (!group[i])
            cout << i << " ";
    }
    cout << endl;

    return 0;
}