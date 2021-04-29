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
    set<int>zero,one;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            zero.insert(i+1);
        else
            one.insert(i+1);
    }
    int group[n+1];
    int x,y;
    x=zero.size();
    y=one.size();
    set<int>::iterator it,it1;
    int k=1;
    if(x==0)
    {
        k--;
         for(it=one.begin();it!=one.end();it++)
            {
                k++;
                group[*it]=k;
            }
    }
    else if(y==0)
    {
        k--;
        for(it=zero.begin();it!=zero.end();it++)
            {
                k++;
                group[*it]=k;
            }
    }
    else if(s[0]=='1')
    {
        int flag=1,pos=0;
        while(y!=0&&x!=0)
        {
            if(flag==1)
            {
                it=one.upper_bound(pos);
                if(x!=0&&y!=0&&it==one.end())
                {
                    k++;
                    it=one.begin();
                    it1=zero.begin();
                    if(*it1<*it)
                    {
                        flag=0;
                        pos=0;
                        continue;
                    }
                }
                pos=*it;
                group[pos]=k;
                one.erase(it);
                flag=0;
                y--;
            }
            if(flag==0)
            {
                it=zero.upper_bound(pos);
                if(x!=0&&y!=0&&it==zero.end())
                {
                    k++;
                    it1=one.begin();
                    it=zero.begin();
                    if(*it1<*it)
                    {
                        flag=1;
                        pos=0;
                        continue;
                    }
                    
                }
                if(it==zero.end())
                {
                    break;
                }
                else
                {
                pos=*it;
                group[pos]=k;
                 zero.erase(it);
                flag=1;
                x--;
                }
            }
            if(x==0&&y!=0)
            {
                  it=one.upper_bound(pos);
                  if(it!=one.end())
                  {
                      pos=*it;
                     group[pos]=k;
                    one.erase(it);
                    flag=1;
                     y--;
                  }
            }
        }
        if(x!=0)
        {
            for(it=zero.begin();it!=zero.end();it++)
            {
                k++;
                group[*it]=k;
            }
        }
        else
        {
            for(it=one.begin();it!=one.end();it++)
            {
                k++;
                group[*it]=k;
            }
        }
    }
    else
    {
         int flag=0,pos=0;
        while(y!=0&&x!=0)
        {
            if(flag==0)
            {
                it=zero.upper_bound(pos);
                if(x!=0&&y!=0&&it==zero.end())
                {
                    k++;
                     it1=one.begin();
                     it=zero.begin();
                    if(*it1<*it)
                    {
                        flag=1;
                        pos=0;
                        continue;
                    }
                }
                pos=*it;
                group[pos]=k;
                 zero.erase(it);
                flag=1;
                x--;
            }
             if(flag==1)
            {
                it=one.upper_bound(pos);
                if(x!=0&&y!=0&&it==one.end())
                {
                    k++;
                     it=one.begin();
                    it1=zero.begin();
                    if(*it1<*it)
                    {
                        flag=0;
                        pos=0;
                        continue;
                    }
                }
                 if(it==one.end())
                {
                    break;
                }
                else
                {
                pos=*it;
                group[pos]=k;
                one.erase(it);
                flag=0;
                y--;
                }
            }
            if(y==0&&x!=0)
            {
                  it=zero.upper_bound(pos);
                  if(it!=zero.end())
                  {
                      pos=*it;
                     group[pos]=k;
                    zero.erase(it);
                    flag=1;
                     x--;
                  }
            }
           // cout<<k;
        }
        if(x!=0)
        {
            for(it=zero.begin();it!=zero.end();it++)
            {
                k++;
                group[*it]=k;
            }
        }
        else
        {  
            for(it=one.begin();it!=one.end();it++)
            {
                k++;
                group[*it]=k;
            }
        }
    }
    cout<<k<<endl;
    for(int i=1;i<=n;i++)
        cout<<group[i]<<" ";
    cout<<endl;

   }
	return 0;
}