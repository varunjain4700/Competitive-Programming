#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin>>n;
    vector<int>a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int min1=a[0];
    int min2=a[1];
    int max1=a[n-1];
    int max2=a[n-2];
    int ans=INT_MAX;
    ans=min(ans,max2-min1);
    ans=min(ans,max1-min2);
    cout<<ans<<endl;
     
	return 0;
}