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
     ll tt,a,b,k;
    cin >> tt;
   while(tt--){
    cin>>a>>b>>k;
    int x;
    unordered_map<ll,ll>boy,girl;
    rep(i,k)
    {
        cin>>x;
        boy[x]++;
    }
    rep(i,k)
    {
        cin>>x;
        girl[x]++;
    }
    ll total=(k*(k-1))/2;
    for(int i=1;i<=a;i++)
    {
        total-=(boy[i]*(boy[i]-1))/2;
    }
     for(int i=1;i<=b;i++)
    {
        total-=(girl[i]*(girl[i]-1))/2;
    }
    cout<<total<<endl;

    }
	return 0;
}