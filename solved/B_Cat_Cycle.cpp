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
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    k--; //number of steps moved by the cat
    ll ans=0,collisions=0;
    if(n%2==0)    //if even length then there are no collisions
    {
        ans=k%n;
        ans++;
    }
    else        // if odd length then cats collide after every n/2 steps
    {
        collisions=k/(n/2);
        ans=(k+collisions)%n;
        ans++;
    }
    cout<<ans<<endl;
     
    }
	return 0;
}