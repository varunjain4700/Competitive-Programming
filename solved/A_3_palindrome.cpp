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

void solve(){
    int n;
    cin>>n;
    string s;
    rep(i,n){
        if(i%4==0||i%4==1)
            s+='a';
        else
        {
            s+='b';
        }
    }
    cout<<s<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

	return 0;
}