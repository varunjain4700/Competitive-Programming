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
    vector<ll>pos,neg,v;
    int x,y;
    rep(i,n)
    {
        cin>>x;
        if(x<0)
            neg.pb(x);
        else
            pos.pb(x);
    }
    sort(pos.begin(),pos.end(),greater<ll>());
    sort(neg.begin(),neg.end());
    x=pos.size();
    y=neg.size();
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        if(cnt==x)
            break;
        v.pb(pos[i]);
            cnt++;
    }
    cnt=0;
    for(int i=0;i<5;i++)
    {
        if(cnt==y)
            break;
        v.pb(neg[i]);
            cnt++;
    }
    int z=v.size();
    ll product=1,maximum=-1e18;
    if(x==0)
    {
        reverse(neg.begin(),neg.end());
        for(int i=0;i<5;i++)
            product*=neg[i];
        maximum=product;
    }
    else
    {
    for(int i=0;i<z-4;i++)
    {
        for(int j=i+1;j<z-3;j++)
        {
            for(int k=j+1;k<z-2;k++)
            {
                for(int l=k+1;l<z-1;l++)
                {
                    for(int m=l+1;m<z;m++)
                    {
                        product=v[i]*v[j]*v[k]*v[l]*v[m];
                        //cout<<product<<" ";
                        maximum=max(maximum,product);
                    }
                }
            }
        }
    }
    }
    cout<<maximum<<endl;
     
    }
	return 0;
}