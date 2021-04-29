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
     int n,q,x,y;
//     cin >> tt;
//    while(tt--){
    cin>>q;
    set<pair<int,int> >s,t;
    set<pair<int,int> >::iterator it1,it2;
    int k=1;
    pair<int,int>p;
    rep(i,q)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            s.insert(mp(y,k));
            t.insert(mp(k,y));
            k++;
        }
        else
        {
            if(x==2)
            {
                cout<<t.begin()->first<<" ";
                p.first=t.begin()->second;
                p.second=t.begin()->first;
                t.erase(t.begin());
                s.erase(p);
            }
            else
            {
                it1=s.end();
                it1--;
                it2=s.lower_bound(mp(it1->first,0));
                cout<<it2->second<<" ";
                p.first=it2->second;
                p.second=it2->first;
                s.erase(it2);
                t.erase(p);
            }
        }
    }
     
 //   }
	return 0;
}