#include <bits/stdc++.h>
#include<unordered_map>
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
     ll tt,n;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    int enter[n+1],exit[n+1],exitt[n+1];
    unordered_map<int,int>m;
    rep(i,n)
        cin>>enter[i];
    int k=1;
    rep(i,n){
        cin>>exit[i];
        m[exit[i]]=k;
        k++;
    }
    rep(i,n)
    {
        exitt[i]=m[enter[i]];
    }
    int ans=0,pre_max=exitt[0];
    for(int i=1;i<n;i++)
    {
        if(exitt[i]<pre_max)
            ans++;
        pre_max=max(pre_max,exitt[i]);
    }
    cout<<ans<<endl;
     
//    }
	return 0;
}