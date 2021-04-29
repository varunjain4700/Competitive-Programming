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
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    int odd=0,winner,turn=1;
    int l=n;
    while(l!=0)
    {
        odd=0;
        for(char a='a';a!='z'+1;a++)
        {
            if(m[a]>0&&m[a]%2!=0)
                odd++;
        }
       // cout<<l<<" "<<odd<<endl;
        if(l%2==0)
        {
            if(odd==0)
                break;
            else
            {
                char a;
                for( a='a';a!='z'+1;a++)
                {
                    if(m[a]>0&&m[a]%2==0)
                    {
                        m[a]--;
                        break;
                    }
                }
                if(a=='z'+1)
                {
                    for( char a='a';a!='z'+1;a++)
                {
                    if(m[a]>0&&m[a]%2!=0)
                    {
                        m[a]--;
                        break;
                    }
                }
                }
            }
        }
        else
        {
            if(odd==1)
                break;
            else
            {
                char a;
                for( a='a';a!='z'+1;a++)
                {
                    if(m[a]>0&&m[a]%2==0)
                    {
                        m[a]--;
                        break;
                    }
                }
                if(a=='z'+1)
                {
                    for( char a='a';a!='z'+1;a++)
                {
                    if(m[a]>0&&m[a]%2!=0)
                    {
                        m[a]--;
                        break;
                    }
                }
                }
            }
        }
        turn++;
        l--;
    }
    if(turn%2!=0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;

	return 0;
}