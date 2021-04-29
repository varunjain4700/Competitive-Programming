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
    string s;
    cin>>s;
    int zeros=0,ones=0;
    int zero[n+1],one[n+1];
    memset(zero,0,sizeof(zero));
    memset(one,0,sizeof(one));
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero[i+1]=zero[i]+1;
            one[i+1]=one[i];
            zeros++;
        }
        else
        {
            one[i+1]=one[i]+1;
            zero[i+1]=zero[i];
            ones++;
        }
    }
    int ans=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='1')
        {
            ans=min(ans,one[i]-1+zeros-zero[i]);
        }
        else
        {
            ans=min(ans,one[i]+zeros-zero[i]);
        }
    }
    ans=min(ans,min(zeros,ones));
    cout<<ans<<endl;
   
    }
	return 0;
}