#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

int max_prefix_sum(int x[],int n){
    int maximum_sum=INT_MIN,current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=x[i];
        maximum_sum=max(maximum_sum,current_sum);
    }
    return maximum_sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int tt,n,m;
    cin >> tt;
   while(tt--){
    cin>>n;
    int r[101],b[101];
    rep(i,n)
        cin>>r[i];
    cin>>m;
    rep(i,m)
        cin>>b[i];
    int sum1,sum2;
    sum1=max_prefix_sum(r,n);
    sum2=max_prefix_sum(b,m);
   // cout<<sum1<<" "<<sum2<<endl;
    if(sum1<0)
        sum1=0;
    if(sum2<0)
        sum2=0;
    cout<<sum1+sum2<<endl;
  
    }
	return 0;
}