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
    if(n==1)
        cout<<9;
    else if(n==2)
        cout<<98;
    else if(n==3) 
        cout<<989;
    else{
       cout<<989; 
    int k=0; 
    for(int i=3;i<n;i++){
        cout<<k;
        k++;
        if(k==10)
            k=0;
   }
    }
    cout<<endl;
   }
	return 0;
}