#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int f[101]={0};
    rep(i,n)
        cin>>f[i];
    int ans=f[0];
    int fuel=f[0];
    for(int i=1;i<n;i++){
        if(fuel>0){
        ans+=f[i];
        fuel+=f[i];
        fuel--;
        }
        else
        {
            break;
        }  
    }
    cout<<ans<<endl;
     
    }
	return 0;
}