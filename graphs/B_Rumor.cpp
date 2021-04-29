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
vector<int>a[100001];
bool vis[100001];
ll ans;

int dfs(int src,ll gold[]){
    vis[src]=true;
    ans=min(ans,gold[src]);
    for(auto i:a[src])
        if(!vis[i])
            dfs(i,gold);
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    ll gold[n+1];
    for(int i=1;i<=n;i++)
        cin>>gold[i];
    for(int i=1;i<=n;i++){
        a[i].clear();
        vis[i]=false;
    }
    int x,y;
    rep(i,m){
        cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }
    ll total=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans=INT_MAX;
            total+=dfs(i,gold);
        }
    }
    cout<<total<<endl;

	return 0;
}