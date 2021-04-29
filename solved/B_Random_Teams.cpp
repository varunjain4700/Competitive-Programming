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
     ll tt,n,m;
//     cin >> tt;
//    while(tt--){
    cin>>n>>m;
    ll maximum,minimum;
    maximum=((n-m+1)*(n-m))/2;
    ll x,y;
    ll cnt1,cnt2;
    if(n%m==0)
    {
        y=n/m;
        minimum=((y*(y-1))/2)*m;
    }
    else
    {
       x=n/m;
       y=x+1;
       cnt1=n%m;
       cnt2=m-n%m;
       minimum=(cnt1*((y)*(y-1))/2)+(cnt2*((x)*(x-1))/2);
    }
    
    cout<<minimum<<" "<<maximum<<endl;
     
    // }
	return 0;
}