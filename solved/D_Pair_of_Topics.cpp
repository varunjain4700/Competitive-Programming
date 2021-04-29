#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
   // cin >> tt;
  // while(tt--){
    cin>>n;
    ll a[200001]={0},b[200001]={0},c[200001]={0};
    rep(i,n)
        cin>>a[i];
    rep(i,n)
        cin>>b[i];
    rep(i,n)
      c[i]=a[i]-b[i];
    sort(c,c+n,greater<ll>());
    int i=0;
    int j=n-1;
    ll ans=0;
    while(i<j){
      if(c[i]+c[j]>0){
        ans+=j-i;
        i++;
        }
      else
      {
        j--;
      }
    }
    cout<<ans<<endl;    
   // }
	return 0;
}