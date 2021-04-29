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
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
     
    }
	return 0;
}