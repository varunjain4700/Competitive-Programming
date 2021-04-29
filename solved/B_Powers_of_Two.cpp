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
     int tt,n,x;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    map<ll,ll>m;
    set<ll>powerof2;
    set<ll>::iterator it2;
    int a[n+1];
    rep(i,n)
    {
        cin>>x;
        m[x]++;
        a[i]=x;
    }
    for(ll i=1;i<=1e10;i*=2)
        powerof2.insert(i);
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
       // it2=powerof2.upper_bound(a[i]);
        m[a[i]]--;
         for(it2=powerof2.upper_bound(a[i]);it2!=powerof2.end();it2++)
         {
            if(m.find(*it2-a[i])!=m.end()){
                cnt+=m[*it2-a[i]];
            }
             
         }
         m[a[i]]++;
    }
    cout<<cnt/2<<endl;
     
//    }
	return 0;
}