#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int solve(int a[],int n,int s){
    int total=0,sum=0,j=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>s)
            return -1;
        else if(sum==s){
            sum=0;
            total+=i-j;
            j=i+1;
        }
    }
    return total;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[n+1],sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    int temp1=0,temp2=0,ans=INT_MAX;
    for(int i=1;i*i<=sum;i++){
        if(sum%i==0){
            temp1=solve(a,n,i);
            temp2=solve(a,n,sum/i);
           // cout<<i<<"- "<<temp1<<endl;
           // cout<<temp2<<endl;
            if(temp1!=-1)
                ans=min(ans,temp1);
            if(temp2!=-1)
                ans=min(ans,temp2);
        }
    }
    cout<<ans<<endl; 
    }
	return 0;
}