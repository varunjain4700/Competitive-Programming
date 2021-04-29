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
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[n+1];
    int cnt=0;
    rep(i,n)
    {
        cin>>a[i];
        if(a[i]%2==1)
            cnt++;
    }
    if(cnt==0)
        cout<<-1<<endl;
    else if(cnt==n)
        cout<<0<<endl;
    else 
    {
        cout<<n-cnt<<endl;
    }
     
    }
	return 0;
}