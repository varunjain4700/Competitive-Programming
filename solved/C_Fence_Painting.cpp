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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,m;
    cin >> tt;
   while(tt--){
    cin>>n>>m;
    int a[n+1],b[n+1],c[m+1];
    rep(i,n)
        cin>>a[i];
    rep(i,n)
        cin>>b[i];
    multiset<int>s;
    rep(i,m)
    {
        cin>>c[i];
        s.insert(c[i]);
    }
    vector<int>v1;
    multiset<pair<int,int> >m1,m2;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            v1.pb(b[i]);
            m2.insert(mp(b[i],i+1));
        }
        m1.insert(mp(b[i],i+1));
    }
    int l=v1.size();
    multiset<int>::iterator it;
    int flag=0;
    int i=0;
    for( i=0;i<l;i++)
    {
        it=s.find(v1[i]);
        if(it!=s.end())
            s.erase(it);
        else
            break; 
    }
    if(i!=l)
        flag=1;
    else
    {
        i=0;
        for( i=0;i<n;i++)
        {
            if(c[m-1]==b[i])
                break;
        }
        if(i==n)
            flag=1;
    }
    if(flag)
        cout<<"NO"<<endl;
    else
    {
        int index[m+1];
        memset(index,0,sizeof(index));
        multiset<pair<int,int> >::iterator it1;
        // for(it1=m2.begin();it1!=m2.end();it1++)
        //     cout<<it1->first<<","<<it1->second<<"  ";
        for(int i=0;i<m;i++)
        {
            it1=m2.lb(mp(c[i],0));
            if(it1!=m2.end())
            {
                if(it1->first==c[i])
                {
                    index[i]=it1->second;
                    m2.erase(it1);
                }  
            }
        }
        for(int i=0;i<m;i++)
        {
            if(index[i]==0)
            {
            it1=m1.lb(mp(c[i],0));
            if(it1!=m1.end())
            {
                if(it1->first==c[i])
                {
                    index[i]=it1->second;
                    m1.erase(it1);
                }  
            }
            }
        }

        if(index[m-1]==0)
        {
        for(int i=0;i<m;i++)
        {
            if(c[m-1]==c[i]&&index[i]!=0)
                index[m-1]=index[i];
        }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            if(index[i]==0)
                index[i]=index[m-1];
            cout<<index[i]<<" ";
        }
        cout<<endl;
    }

    }
	return 0;
}