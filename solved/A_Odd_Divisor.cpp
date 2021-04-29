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
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int flag=0;
    while(n>1)
    {
        if(n%2==1)
        {
            flag=1;
            break;
        }
        n/=2;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
     
    }
	return 0;
}