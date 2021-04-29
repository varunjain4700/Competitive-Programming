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
bool prime[1000001];
int ans[1000001];

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    memset(ans,0,sizeof(ans));
     for(int i=5;i<=n;i++)
    {
        if(prime[i])
        {
            if(prime[i-2])
            {
                ans[i]=ans[i-1]+1;
            }
            else
                ans[i]=ans[i-1];
        }
        else
            ans[i]=ans[i-1];
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
    SieveOfEratosthenes(1000000);
   while(tt--){
    cin>>n;
    cout<<ans[n]<<endl;
     
    }
	return 0;
}