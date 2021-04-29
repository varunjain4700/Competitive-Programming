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
    string s;
    cin>>n>>k>>s;
    queue<int>q;
    q.push(0);
    int cnt_a=0,cnt_b=0;
    int idx=0,ans=0;
    int i;
    for(i=0;i<n;i++){      //assuming answer is substring of a
        if(s[i]=='a')
            cnt_a++;
        else 
        {
            cnt_b++;
            q.push(i+1);
        }
        if(cnt_b>k){
            idx=q.front();
            q.pop();
            ans=max(ans,i-idx);
            //cout<<i-idx<<" ";
            cnt_b--;
        }
    }
    if(cnt_b<=k){
    idx=q.front();
    //cout<<i-idx<<" ";
    ans=max(ans,i-idx);}

    while(!q.empty())
        q.pop();
    q.push(0);
    cnt_a=0;cnt_b=0;
    for(i=0;i<n;i++){      //assuming answer is substring of b
        if(s[i]=='b')
            cnt_b++;
        else 
        {
            cnt_a++;
            q.push(i+1);
        }
        if(cnt_a>k){
            idx=q.front();
            q.pop();
            ans=max(ans,i-idx);
            //cout<<i-idx<<" ";
            cnt_a--;
        }
    }
    if(cnt_a<=k){
    idx=q.front();
    //cout<<i-idx<<" ";
    ans=max(ans,i-idx);}
    cout<<ans<<endl;


	return 0;
}