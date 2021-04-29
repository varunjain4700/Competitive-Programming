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
    vector<int>a;
    int pos[n+1];
    int x;
    rep(i,n){
        cin>>x;
        a.pb(x);
        pos[x]=i+1;
    }
    vector<int>res;
    int t=n;
    int m=n;
    for(int i=n;i>=1;i--)
    {
        if(pos[i]<=t){
            for(int j=pos[i]-1;j<m;j++)
            {
                res.pb(a[j]);
                t--;
            }
            m=pos[i]-1;
        }
        if(res.size()==n)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
    cout<<endl;
     
    }
	return 0;
}