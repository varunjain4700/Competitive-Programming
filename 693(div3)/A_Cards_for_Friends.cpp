#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

int power(int x,int y){
    if(y==0)
        return 1;
    else 
        return x*power(x,y-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,w,h;
    cin >> tt;
   while(tt--){
    cin>>w>>h>>n;
    ll cnt=0,ans=0;
    while(w>1){
        if(w%2==0){
         w/=2;
         cnt++;
        }
        else 
        break;
    }
    while(h>1){
        if(h%2==0){
         h/=2;
         cnt++;
        }
        else 
        break;
    }
    ans=power(2,cnt);
    if(ans>=n)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;

     
    }
	return 0;
}