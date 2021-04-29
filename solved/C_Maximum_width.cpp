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
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s;
    cin>>t;
    int first_occurence[m+1],last_occurence[m+1];
    memset(first_occurence,0,sizeof(first_occurence));
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]==t[j]){
            first_occurence[j]=i+1;
            j++;
        }
        if(j==m)
            break;
    }
    j=m-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]==t[j]){
            last_occurence[j]=i+1;
            j--;
        }
        if(j==-1)
            break;
    }
    int ans=0;
    for(int i=0;i<m-1;i++)
        ans=max(ans,abs(last_occurence[i+1]-first_occurence[i]));
    cout<<ans<<endl;

	return 0;
}