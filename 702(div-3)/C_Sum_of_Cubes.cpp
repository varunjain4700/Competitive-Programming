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
    ll x=0;
    set<ll>s;
    for(ll i=1;i<=10000;i++)
    {
        x=i*i*i;
        s.insert(x);
        //cout<<x<<" ";

    }
    set<ll>::iterator it;
    int flag=0;
    for(ll i=1;i<=10000;i++)
    {
        x=n-i*i*i;
        if(x<=0)
            break;
       // cout<<x<<" ";
        it=s.find(x);
        if(it!=s.end())
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
     
    }
	return 0;
}