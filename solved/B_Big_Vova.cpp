#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)

int gcd(int x,int y){
    if(x==0)
    return y;
    else if(y==0)
    return x;
    else if(x>=y)
    return gcd(x%y,y);
    else
    return gcd(x,y%x); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
    cin >> tt;
   while(tt--){
    cin>>n;
    int a[1001]={0},largest=INT_MIN;
    rep(i,n){
        cin>>a[i];
        largest=max(largest,a[i]);
    }
    rep(i,n){
        if(a[i]==largest){
            a[i]=0;
            break;
        }
    }
    cout<<largest<<" ";
    int p=largest;
    rep(i,n){
         largest=INT_MIN;
        rep(j,n){
            if(a[j]!=0){
                int gcdd=gcd(a[j],p);
                //cout<<gcdd<<" ";
                largest=max(largest,gcdd);
                  }
        }
       // cout<<largest<<" ";
        rep(j,n){
            if(a[j]!=0){
            if(gcd(p,a[j])==largest){
                cout<<a[j]<<" ";
                p=gcd(p,a[j]);
                a[j]=0;
                break;
                 } 
            }
        }
    }
    cout<<endl;     
    }
	return 0;
}