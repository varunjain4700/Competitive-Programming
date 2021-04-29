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
    int tt,n,m;
    cin >> tt;
   while(tt--){
    cin>>n>>m;
    set<pair<int,int> >s;
    set<pair<int,int> >::iterator it;
    int x;
    rep(i,n)
    {
        cin>>x;
        s.insert(mp(x,i+1));
    }
    ll cost=0;
    int k=0,size=1,index=0;
    rep(i,m)
    {
        cin>>x;
        it=s.lower_bound(mp(x,0));
        index=it->second;
        if(index>k)
        {
            cost+=(index-size)*2+1;
            k=index;
        }
        else
        {
            cost+=1;
        }
        size++;
        // cout<<k<<",";
        // cout<<cost<<" ";
    }
    cout<<cost<<endl;
     
    }
	return 0;
}