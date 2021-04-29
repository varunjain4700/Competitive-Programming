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
     int tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    vector<int>v;
    for(int i=k;i>=2*k-n;i--)
    {
        v.pb(i);
    }
    int m=v.size();
    int cnt=m;
    int s=1;
    while(cnt!=k)
    {
        cout<<s<<" ";
        s++;
        cnt++;
    }
    for(int i=0;i<m;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    
     
    }
	return 0;
}