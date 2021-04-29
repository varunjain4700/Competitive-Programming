#include<bits/stdc++.h>
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
     ll tt,n,q;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    int a[n+1];
    multiset<pair<int,int> >s;
    multiset<pair<int,int> >::iterator it;
    rep(i,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    rep(i,n)
    {
        s.insert(mp(a[i],i+1));
    }
    cin>>q;
    int x;
    rep(i,q)
    {
        cin>>x;
        it=s.lower_bound(mp(x+1,0));
        if(it==s.end())
            cout<<n<<endl;
        else
            cout<<(it->second)-1<<endl;
        
    }

    // }
	return 0;
}