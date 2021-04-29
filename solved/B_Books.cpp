#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,x;
    //cin >> tt;
  // while(tt--){
    cin>>n>>x;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    int i=0;
    ll sum=0,cnt=0,ans=INT_MIN;
    for(int j=0;j<n;j++)
    {
        sum+=a[j];
        cnt++;
        if(sum>x)
        {
            sum-=a[i];
            i++;
            cnt--;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;

     
   // }
	return 0;
}