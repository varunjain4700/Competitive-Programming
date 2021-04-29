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
     ll tt,n,m,a,b;
    cin >> tt;
   while(tt--){
    cin>>a>>b;
    int aa[33]={0},bb[33]={0};
    memset(aa,0,sizeof(aa));
    n=0,m=0;
    ll k=1;
    while(a!=0)
    {
        if((a&1)==1)
         aa[k]++;
        a=a>>1;
        //cout<<a;
        n++;
        k++;
    }
    k=1;
     while(b!=0)
    {
        if((b&1)==1)
         bb[k]++;
        b=b>>1;
        //cout<<a;
        m++;
        k++;
    }
   int flag=0;
    for(int i=2;i<=min(m,n);i++)
    {
        if(aa[i]==1&&bb[i]==1)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

     
    }
	return 0;
}