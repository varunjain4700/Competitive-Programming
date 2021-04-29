#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
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
    int x;
    cin>>x;
    int ans;
    if((x&1)==1)
        ans=1;
    else
        ans=2;
    rep(i,n-1)
    {
        cin>>x;
        if(ans==1)
        {
            if((x&1)==1)
                ans=2;
        }
        else
        {
            if((x&1)==1)
                ans=1;
        }
    }
    if(ans==2)
        cout<<1<<endl;
    else
        cout<<2<<endl;
     
    }
	return 0;
}