#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
vector<int>adj[150001];
bool vis[150001];
int par[150001];
int cnt=0;

int dfs(int src,int parent){
    vis[src]=1;
    par[src]=parent;
    cnt++;
    for(auto i:adj[src])
        if(!vis[i])
            dfs(i,parent);
    return cnt;
}

void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    int degree[n+1];
    memset(degree,0,sizeof(degree));
    rep(i,m){
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
        degree[x]++;
        degree[y]++;
    }
    int comp_size[n+1];
    memset(vis,0,sizeof(vis));
    memset(comp_size,0,sizeof(comp_size));
    rep(i,n){
        if(!vis[i])
        {
            cnt=0;
            comp_size[i]=dfs(i,i);
        }
    }
    rep(i,n){
        //cout<<degree[i]<<" ";
        if(!comp_size[i])
            comp_size[i]=comp_size[par[i]];
        if(comp_size[i]-1!=degree[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

	return 0;
}