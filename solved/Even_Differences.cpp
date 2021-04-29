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
    int x,odd=0,even=0;
    rep(i,n)
    {
        cin>>x;
        if((x&1)==1)
            odd++;
        else
            even++;
    }
    cout<<min(odd,even)<<endl;

     
    }
	return 0;
}