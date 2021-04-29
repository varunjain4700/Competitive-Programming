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
     ll tt,n;
//     cin >> tt;
//    while(tt--){
    cin>>n;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    set<int>s;
    set<int>::iterator it;
    map<int,int>m;
    int days=1,events=0;
    int cnt[n+1];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            it=s.find(-a[i]);
            if(it==s.end())
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                s.erase(it);
            }
        }
        else
        {
            if(m[a[i]]==1)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                m[a[i]]++;
                s.insert(a[i]);
                events++;
            }
        }
         if(s.empty())
        {
            cnt[days]=2*events;
            events=0;
            days++;
            m.clear();
        }
    }
    if(!s.empty())
        cout<<-1<<endl;
    else
    {
        cout<<--days<<endl;
        for(int i=1;i<=days;i++)
            cout<<cnt[i]<<" ";
    }
     
//    }
	return 0;
}