#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
//#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

int query(int l,int r){
    int x;
    if(l==r)
    {
        return 0;
    }
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>x;
    return x;
}
void solve(int n){
    int smax=query(1,n);
    int ans;
    if(query(1,smax)==smax){
        int left=1;
        int right=smax-1;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(query(mid,smax)==smax)
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
            
        }
        cout<<"! "<<ans<<endl;
        return;
    }
    else{
        int left=smax+1;
        int right=n;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(query(smax,mid)==smax)
            {
                ans=mid;
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }    
        }
        cout<<"! "<<ans<<endl;
        return;
    }
}

int main() {
    int n,x;
    cin>>n;
    solve(n);

	return 0;
}