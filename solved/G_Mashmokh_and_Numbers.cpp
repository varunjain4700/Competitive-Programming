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
    int n,k;
    cin>>n>>k;
    int pairs=n/2;
    if(n==1&&k==0)
        cout<<1;
    else if(k<pairs||k==0||n==1)
        cout<<-1<<endl;
    else
    {
        int score_rem=k-(pairs-1);
        vector<int>a;
        a.pb(score_rem);
        a.pb(2*score_rem);
        for(int i=a[1]+1;i<=1e9;i++)
        {
            a.pb(i);
            if(a.size()>=n)
                break;
        }
        rep(i,n)
            cout<<a[i]<<" ";
    }
    


	return 0;
}