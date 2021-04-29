#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,q;
    cin >> tt;
   while(tt--){
    cin>>n>>q;
    char s[101];
    cin>>s;
    int x[101]={0},y[101]={0};
    rep(i,q)
        cin>>x[i]>>y[i];
    char p,r;
    int c=0,d=0;
    rep(i,q){
        c=0;d=0;
        p=s[x[i]-1];r=s[y[i]-1];
        //cout<<p<<" "<<r;
        for(int j=0;j<x[i]-1;j++){
                if(s[j]==p){
                c=1;
                break;
                }
            }
         for(int j=y[i];j<n;j++){
                if(s[j]==r){
                d=1;
                break;
                }
            }
          //  cout<<c<<" "<<d;
            if(c==1||d==1)
            cout<<"YES"<<endl;
            else
             cout<<"NO"<<endl;   
        }
    
    }

     
	return 0;
}