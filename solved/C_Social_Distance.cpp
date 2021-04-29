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
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
         v.pb(i+1);
    }
    int m=v.size(),diff=0,ans=0;
    int size=0;
    if(m>0)
    {
    for(int i=0;i<m-1;i++)
    {
        diff=v[i+1]-v[i]-1;
        size=diff-2*k;
        if(size>0)
        {
            ans+=ceil((double)size/(k+1));
        }
    }
    size=v[0]-1-k;
    if(size>0)
    {
        ans+=ceil((double)size/(k+1));
    }
    size=n-(v[m-1])-k;
    if(size>0)
    {
        ans+=ceil((double)size/(k+1));
    }
    }
    else
    {
         ans+=ceil((double)n/(k+1));
    }
     cout<<ans<<endl;
     
    }
	return 0;
}