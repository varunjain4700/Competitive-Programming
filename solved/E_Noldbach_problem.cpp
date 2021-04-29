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
vector<int>a;
bool prime[1001];

void SieveOfEratosthenes(int n)
{
    a.clear();
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            a.pb(p);
            
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    SieveOfEratosthenes(n);
    int m=a.size();
    for(int i=2;i<n+1;i++){
        for(int j=0;j<m-1;j++){
            if(prime[i]){
                if(a[j]+a[j+1]==i-1){
                    k--;
                    break;
                }
                if(a[j]+a[j+1]>=i-1)
                    break;
            }
        }
        if(k<=0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    
	return 0;
}