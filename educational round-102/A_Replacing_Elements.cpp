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
     ll tt,n,d;
    cin >> tt;
   while(tt--){
    cin>>n>>d;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]<=d)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        int i;
        for( i=0;i<n;i++)
        {
            if(a[i]>d)
                break;
        }
        if(i==n)
            flag=1;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
    
     
    }
	return 0;
}