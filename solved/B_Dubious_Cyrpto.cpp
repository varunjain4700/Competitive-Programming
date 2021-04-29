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
     ll tt,l,r,m;
    cin >> tt;
   while(tt--){
    cin>>l>>r>>m;
    ll y;
    ll a=0,b,c,x;
    for(ll i=l;i<=r;i++)
    {
         x=(ll)ceil((double)m/i);
        y=m-i*x;
        if(y>=l-r&&y<=r-l)
        {
          //  cout<<i<<" ";
            a=i;b=l;c=b-y;
            if(c>=l&&c<=r)
            break;
            else
            {
                b=r;
                c=b-y;
               if(c>=l&&c<=r)
                break;
            }    
        }
        if(x>1)
        {
            x--;
            y=m-i*x;
            if(y>=l-r&&y<=r-l)
            {
          //  cout<<i<<" ";
                a=i;b=l;c=b-y;
                if(c>=l&&c<=r)
                break;
                else
                {
                    b=r;
                    c=b-y;
                    if(c>=l&&c<=r)
                    break;
                }    
            }
        }

    }
    cout<<a<<" "<<b<<" "<<c<<endl;
     
    }
	return 0;
}