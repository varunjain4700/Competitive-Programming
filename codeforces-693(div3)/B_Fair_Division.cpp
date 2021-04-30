#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[n+1];
    int sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==1)
        cout<<"NO"<<endl;
    else{
        int cnt=0;
        sum=sum/2;
        for(int i=0;i<n;i++){
            if(a[i]==1)
                cnt++;
        }
        if((sum%2==1&&cnt%2==1)||(sum%2==1&&cnt==0))
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
     
    }
	return 0;
}