#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[n+1];
    rep(i,n)
        cin>>a[i];
    set<float>s;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double s1=a[j]-a[i];
            double s2=sqrt(a[i]*a[i]+1);
            double s3=sqrt(a[j]*a[j]+1);
            double sp=(s1+s2+s3)/2;
            double area=sqrt(sp*abs(sp-s1)*abs(sp-s2)*abs(sp-s3));
            // if(s.find(area)!=s.end())
            //     continue;
            s.insert(area);
        }
    }
    cout<<s.size()<<endl;

     
    }
	return 0;
}