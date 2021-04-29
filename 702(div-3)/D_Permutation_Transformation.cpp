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
int d[101];

void build(int l,int r,int depth,int a[])
{
    if(l>r)
        return;
    int maxm=0,x=0;
    for(int i=l;i<=r;i++)
    {
        if(a[i]>maxm)
        {
            x=i;
            maxm=a[i];
        }
    }
   // cout<<l<<" "<<r<<" "<<endl;
    d[x]=depth;
    build(l,x-1,depth+1,a);
    build(x+1,r,depth+1,a);
}

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
    build(0,n-1,0,a);
    for(int i=0;i<n;i++)
        cout<<d[i]<<" ";
    cout<<endl;
     
    }
	return 0;
}