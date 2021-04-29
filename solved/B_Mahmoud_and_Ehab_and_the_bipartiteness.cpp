#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
vector<int>a[100001];
bool vis[100001];
int group[100001];

void dfs(int src,int color)
{
    vis[src]=true;
    group[src]=color;
    for(int i:a[src])
    {
        if(!vis[i])
            dfs(i,!color);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a[i].clear();
        vis[i]=false;
    }
    int u,v;
    int degree[n+1];
    memset(degree,0,sizeof(degree));
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
        degree[u]++;
        degree[v]++;
    }
    dfs(1,0);
    int color1=0,color2=0;
    for(int i=1;i<=n;i++)
    {
        if(group[i]==0)
            color1++;
        else 
            color2++;
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(group[i]==0)
        {
            ans+=color2-degree[i];
        }
    }
    cout<<ans<<endl;
     
//    }
	return 0;
}