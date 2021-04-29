#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n,k;
    cin >> tt;
   while(tt--){
    cin>>n>>k;
    char a[1000001],b[1000001];
    cin>>a;
    cin>>b;
    ll cnt_a[27]={0},cnt_b[27]={0};
    rep(i,n){
        cnt_a[a[i]-'a']++;
        cnt_b[b[i]-'a']++;
    }
    int flag=0;
    for(int i=0;i<25;i++){
        if(cnt_a[i]<cnt_b[i]){
            flag=1;
            break;
        }
        ll diff=cnt_a[i]-cnt_b[i];
        if(diff%k!=0){
            flag=1;
            break;
        }
       // cnt_a[i]-=diff;
        cnt_a[i+1]+=diff;
    }
    if(flag)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    }
    return 0;
}