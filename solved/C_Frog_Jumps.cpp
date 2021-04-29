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
    char s[200001];
    cin>>s;
    n=strlen(s);
    ll dis=INT_MIN,curr,prev=0;
    int i;
    for(i=0;i<n;i++){
        if(s[i]=='R'){
            prev=i;
            dis=max(dis,prev+1);
            break;
        }
    }
    if(i==n)
        dis=n+1;
    else{
    for(int j=i+1;j<n;j++){
        if(s[j]=='R'){
            curr=j;
        dis=max(dis,curr-prev);
       // cout<<curr-prev<<" ";
        prev=j;
        }
    }
    dis=max(dis,n-prev);
    }
    cout<<dis<<endl;
    }
	return 0;
}