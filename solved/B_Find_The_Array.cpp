#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    ll a[n+1],b[n+1],c[n+1];
    ll sum=0;
    rep(i,n){
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
        sum+=a[i];
    }
    ll sum1=0,sum2=0;
    rep(i,n){
            if((i&1)==1)
                b[i]=1;
            else
            {
                c[i]=1;
            }
            sum1+=abs(a[i]-b[i]);
            sum2+=abs(a[i]-c[i]);
            
    }
    if(sum1<=sum/2){
     rep(i,n)
         cout<<b[i]<<" ";
    cout<<endl;
    }
    else{
      rep(i,n)
         cout<<c[i]<<" ";
    cout<<endl;  
    }
    
    }
	return 0;
}