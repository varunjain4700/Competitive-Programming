#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,a,b,c;
    cin >> tt;
   while(tt--){
    cin>>a>>b>>c;
    if((a+b+c)%9==0&&min(a,min(b,c))>=(a+b+c)/9)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    
     
    }
	return 0;
}