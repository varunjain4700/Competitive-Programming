#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)
int d=INT_MAX;
int days=0;
int solve(vector<int>&c,int n,int k,int mid){
    days=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(c[i]==mid){
            if(cnt==0)
                continue;
            else
            {
                cnt++;
            }
            
        }
        else if(c[i]!=mid){
            cnt++;
        }
        if(cnt==k){
            days++;
            cnt=0;
        }

    }
    if(cnt!=0)
    days++;
    return days;
    //d=min(d,days);
    //cout<<mid<<"- "<<days<<" "<<d<<endl;
    
}

/*int binarysrch(vector<int>&c,int n,int k){
    d=INT_MAX;
    int left=1;
    int right=1e5;
    while(left<right){
        cout<<left<<"-"<<right<<endl;
        int mid=(left+right)/2;
        if(solve(c,n,k,mid)){
            right=mid;
        }
        else
        {
            left=mid+1;
        }
        
    }
    return d;

}*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    vector<int>c;
    ll x;
    rep(i,n){
        cin>>x;
        c.push_back(x);
        
    }
    int i;
    for( i=0;i<(n-1);i++){
        if(c[i]!=c[i+1])
            break;
    }
    if(i==n-1)
    cout<<0<<endl;
    else
    {
        ll ans=INT_MAX;
        for(int i=1;i<=100;i++){
            ll temp=solve(c,n,k,i);
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }

     
    }
	return 0;
}