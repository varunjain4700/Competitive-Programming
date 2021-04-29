#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll tt,n;
     char s[201];
    cin >> tt;
   while(tt--){
    cin>>n;
     cin>>s;
     int cnt=0;
     int flag=0;
     for(int i=0;i<=n-4;i++){
       if(s[i]-'0'==2&&s[i+1]-'0'==0&&s[i+2]-'0'==2&&s[i+3]-'0'==0) {
           if(i==0||i==n-4){
           flag=1;
           break;}
       }
    }
    int x=0,j=0;
    if(flag==0){
    for(int i=0;i<n;i++){
        if(x==0&&s[i]-'0'==2){
            x=1;
            j=i;
        }
        if(j==0&&x==1){
            if(s[i]-'0'==0&&s[i+1]-'0'==2&&s[i+2]-'0'==0){
                if(i==j+1||i==n-3){
                    flag=1;
                    break;
                }
            }
        }
    }
    }
    if(flag==0){
        x=0;
       for(int i=0;i<n;i++){
        if(x==0&&s[i]-'0'==2&&s[i+1]-'0'==0){
            x=1;
            j=i;
        }
       // cout<<j<<" "<<x;
        if(j==0&&x==1){
            if(s[i]-'0'==2&&s[i+1]-'0'==0){
                if(i==j+2||i==n-2){
                    flag=1;
                    break;
                }
            }
        }
    } 
    }
    if(flag==0){
        x=0;
       for(int i=0;i<n;i++){
        if(x==0&&s[i]-'0'==2&&s[i+1]-'0'==0&&s[i+2]-'0'==2){
            x=1;
            j=i;
        }
       // cout<<j<<" "<<x;
        if(j==0&&x==1){
            if(s[i]-'0'==0){
                if(i==j+3||i==n-1){
                    flag=1;
                    break;
                }
            }
        }
    } 
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
   }
    
	return 0;
}