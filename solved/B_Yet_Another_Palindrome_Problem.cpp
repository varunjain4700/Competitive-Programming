#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

bool palindrome(int a[],int b[],int n){
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    if(dp[n][n]>=3)
        return true;
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[5001]={0},b[5001]={0};
    rep(i,n){
        cin>>a[i];
        b[n-(i+1)]=a[i];
    }
    if(palindrome(a,b,n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;  
    }
	return 0;
}