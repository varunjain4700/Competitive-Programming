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
     ll tt,n;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    int curr_ans=1,ans=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            curr_ans++;
        else
        {
            curr_ans=1;
        }
        ans=max(ans,curr_ans);      
    }
    cout<<ans<<endl;
    
    // }
	return 0;
}