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
    int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<k;i++){
        for(int j=i;j<n;j+=k){
            if(s[i]!='?'&&s[j]=='?')
                s[j]=s[i];
            if(s[i]=='?'&&s[j]!='?')
                s[i]=s[j];
            else if(s[i]!='?'&&s[j]!='?')
            {
                if(s[i]!=s[j])
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    //cout<<s<<endl;
    int zeros=0,ones=0;
    for(int i=0;i<k;i++){
        if(s[i]=='0')
            zeros++;
        else if(s[i]=='1')
        {
            ones++;
        } 
    }
    if(zeros>k/2||ones>k/2)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--)
        solve();

	return 0;
}