#include <bits/stdc++.h>
#include<unordered_map>
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
     int n,k;
//     cin >> tt;
//    while(tt--){
    cin>>n>>k;
    int x;
    unordered_map<int,int>m;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<=k;i++)
        m[a[i]]++;
    cnt=m.size();
    int left=1,right=k;
    int diff=k;
    int i=1;
    for(int j=k+1;j<=n;j++)
    {
       m[a[j]]++;
        if(m[a[j]]==1)
            cnt++;
        while(cnt>k)
        {
            m[a[i]]--;
            if(m[a[i]]==0)
                cnt--;
            i++;
        }
        if(j-i+1>diff)
        {
            diff=j-i+1;
            left=i;right=j;
        }
    }
    cout<<left<<" "<<right<<endl;
  
  //  }
	return 0;
}