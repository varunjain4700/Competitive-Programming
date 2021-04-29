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
    vector<int>v;
    ll x;
    rep(i,n){
        cin>>x;
        v.push_back(x);
    }
     x=0;
     ll k=0,j=0;
    rep(i,n){
        if(x==0){
        cout<<v[k]<<" ";
        k++;
        x=1;
        }
        else
        {
            x=0;
            cout<<v[n-1-j]<<" ";
            j++;
        }
        
    }
    cout<<endl;
     
    }
	return 0;
}