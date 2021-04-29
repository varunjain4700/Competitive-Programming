#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,m;
    cin >> tt;
   while(tt--){
    cin>>n>>m;
    char s[n+1][m+1];
    int dp[n+1][m+1];
     memset(dp,0,sizeof(dp));
    rep(i,n){
        rep(j,m){
            cin>>s[i][j];
            if(s[i][j]=='*')
                dp[i][j]=1;
            else
            {
                dp[i][j]=0;
            }
            
        }
    }
    int sum=0;
    for(int i=n-2;i>=0;i--){
        for(int j=1;j<=m-2;j++){
            if(dp[i][j]==1)
            dp[i][j]=1+min(dp[i+1][j-1],min(dp[i+1][j],dp[i+1][j+1]));
        }
    }
    rep(i,n){
        rep(j,m){
           // cout<<dp[i][j]<<" ";
            sum+=dp[i][j];
        }
       // cout<<endl;
    }
    cout<<sum<<endl;
     
    }
	return 0;
}