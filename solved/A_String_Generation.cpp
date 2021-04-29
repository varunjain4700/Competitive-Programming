#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        if(i%3==0)
            cout<<'a';
        else if(i%3==1)
            cout<<'b';
        else
            cout<<'c';
        
    }
    cout<<endl;
     
    }
	return 0;
}