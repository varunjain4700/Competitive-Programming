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
     int n,m;
//     cin >> tt;
//    while(tt--){
    cin>>n>>m;
    int a[n+1][m+1];
    rep(i,n)
        rep(j,m)
            cin>>a[i][j];
    int b[n+1];
    rep(i,n)
        b[i]=INT_MAX;
    rep(i,n)
    {
        rep(j,m)
        {
            b[i]=min(b[i],a[i][j]);
        }
    }
    sort(b,b+n);
    cout<<b[n-1]<<endl;
     
   // }
	return 0;
}