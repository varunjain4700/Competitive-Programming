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

ll add(ll a,ll b){
    ll x=a;
    for(int i=1;i<b;i++)
        x*=10;
    return x;
}
int sumofdigits(ll num){
    int sum=0,a;
    while(num>0){
        a=num%10;
        sum+=a;
        num/=10;
    }
    return sum;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt,n,k;
    cin >> tt;
    while(tt--){
    cin>>n>>k;
    ll num=n,sum=0,a;
    sum=sumofdigits(num);
    if(sum<=k)
        cout<<0<<endl;
    else
    {
        ll ans=0;
        int i=1;
        while(n>0){
            a=n%10;
            if(a>0){
            n+=10-a;
            ans+=add(10-a,i);}
            sum=sumofdigits(n);
            if(sum<=k)
                break;
            n/=10;
            i++;
        }
        cout<<ans<<endl;
    }

    }
	return 0;
}