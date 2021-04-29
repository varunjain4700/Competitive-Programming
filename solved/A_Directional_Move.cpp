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
    string s;
    cin>>s;
    vector<char>v,v1;
    v.pb('E');
    v.pb('S');
    v.pb('W');
    v.pb('N');
    v1.pb('E');
    v1.pb('N');
    v1.pb('W');
    v1.pb('S');
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            ans++;
        else
            ans--;
    }
    if(ans<0)
    cout<<v1[(abs(ans))%4]<<endl;
    else
    cout<<v[(abs(ans))%4]<<endl;
     
    }
	return 0;
}