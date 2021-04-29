#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

int gcd(int x,int y)
{
    if(y==0)
        return x;
    else if(x==0)
        return y;
    else if(x>=y)
        return gcd(x%y,y);
    else
    {
        return gcd(x,y%x);
    }  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt;
    cin >> tt;
   while(tt--){
       char s[21],t[21];
       cin>>s;
       cin>>t;
       int n,m;
       n=strlen(s);
       m=strlen(t);
       int lcm=m*n/gcd(m,n);
       char ss[1001];
       int k=0;
       for(int i=0;i<lcm;i++)
       {
           ss[i]=s[k];
           k++;
           if(k==n)
            k=0;
       }
       int flag=0;
       k=0;
       for( int i=0;i<lcm;i++)
       {
           if(t[k]!=ss[i])
                flag=1;
            k++;
            if(k==m)
                k=0;
       }
       if(flag==1)
        cout<<-1<<endl;
        else
        {
            for(int i=0;i<lcm;i++)
                cout<<ss[i];
            cout<<endl;
        }
    
    }
	return 0;
}