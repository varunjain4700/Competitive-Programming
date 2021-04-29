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
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    int x;
    set<int>s;
    set<int>::iterator it;
    vector<int>v;
    rep(i,n)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()>k)
        cout<<-1;
    else
    {
        for(it=s.begin();it!=s.end();it++)
        {
            v.pb(*it);
        }
        int m=v.size();
        while(v.size()!=k&&v.size()<k)
        {
            v.pb(1);
        }
        cout<<n*k<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
                cout<<v[j]<<" ";
        }
    }
    cout<<endl;

     
    }
	return 0;
}