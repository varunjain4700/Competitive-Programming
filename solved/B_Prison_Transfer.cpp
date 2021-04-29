#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,t,c;
   // cin >> tt;
   //while(tt--){
    cin>>n>>t>>c;
    ll a[n+1];
    rep(i,n)
        cin>>a[i];
    int j=0;
    ll ans=0,temp_ans=0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]>t){
             temp_ans=i-j-c+1;
            if(temp_ans>0)
                ans+=temp_ans;
            j=i+1;
        }
       // cout<<ans<<" ";
    }
     temp_ans=i-j-c+1;
        if(temp_ans>0)
            ans+=temp_ans;
   cout<<ans<<endl;
   
   // }
	return 0;
}