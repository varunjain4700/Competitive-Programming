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
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    double s=0;
    int cnt=0,p=1,q;
    for(int i=0;i<n-1;i++)
    {
        s=(double)(max(a[i],a[i+1]))/min(a[i],a[i+1]);
        if(s>2)
        {
            p=min(a[i],a[i+1]);
            q=max(a[i],a[i+1]);
            while(2*p<q)
            {
                p*=2;
                cnt++;
            }
        }
       // cout<<cnt<<" ";
    }
    cout<<cnt<<endl;
     
    }
	return 0;
}