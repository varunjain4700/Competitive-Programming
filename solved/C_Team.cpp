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
    int x;
    vector<int>a;
    multiset<int>s;
    rep(i,n)
    {
        cin>>x;
        a.pb(x);
        s.insert(x);
    }
    sort(a.begin(),a.end());
    multiset<int>::iterator it;
    ll sum=0,ans=0;
    int m=n;
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[j]>=k)
        {
            ans++;
            j--;
        }
        else if(a[i]+a[j]>=k)
        {
            ans++;
            i++;
            j--;
        }
        else
            i++;
    }
    if(a[j]>=k)
        ans++;
    cout<<ans<<endl;
     
    }
	return 0;
}