#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    vector<int>a;
    ll x,sum=0;
    rep(i,n){
        cin>>x;
        a.push_back(x);
        sum+=x;
    }
    ll summ=0,max_sum=INT_MIN;
    int cnt=0;
    rep(i,n){
        summ+=a[i];
        max_sum=max(max_sum,summ);
        if(summ<=0){
            cnt=-1;
            summ=0;
        }
        cnt++;
        if(max_sum>=sum){
            break;
        }
    }
   // cout<<cnt<<" ";
   // cout<<sum<<" "<<max_sum<<endl;
    if(sum>max_sum)
        cout<<"YES"<<endl;
    else if(sum==max_sum&&cnt==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
     
    }
	return 0;
}