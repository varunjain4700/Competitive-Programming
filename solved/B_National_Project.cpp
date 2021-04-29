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
     ll tt,n,g,b;
    cin >> tt;
   while(tt--){
    cin>>n>>g>>b;
    ll num,ans=0,num1,num2;
    if(g>=n)
        cout<<n<<endl;
    else
    {
        num=(n+1)/2;
        num1=(ll)ceil((double)num/g);
        ans+=num1*g;
       // cout<<ans<<" ";
        ans+=(num1-1)*b;
        ll temp=num1*(g+b);
        if(ans>n&&num1*g>=num)
        ans-=(num1*g-num);
        if(ans<n)
        {
            ans+=b;
            if(ans>n)
            {
                ans=n;
            }
            if(ans<n)
            {
                num=n-ans;
                num2=g+b;
                num1=(ll)ceil((double)num/num2);
                ans+=num1*(g+b);
                if(ans>n)
                    ans=n;
            }
        }
        cout<<ans<<endl;
    }
     
    }
	return 0;
}