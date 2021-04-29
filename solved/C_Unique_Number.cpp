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
    int a[10]={0};
    int b[10]={0};
    for(int i=1;i<=9;i++){
        a[i]=i;
    }
    int flag=0,j;
    if(n<=9)
        cout<<n<<endl;
    else{
         j=1;
         int k=0;
        int x=9;
        b[1]=9;
        n-=x;
        while(n>0){
            if(n>0&&n<x){
                j++;
                b[j]=n;
                break;

            }
            if(x>=2){
                x--;
                j++;
                b[j]=x;
                n-=x;}
                else{
                    flag=1;
                break;
                }
        }
        //cout<<j;
        sort(b+1,b+j+1);
        map<int,int>m;
        for(int i=1;i<=j;i++){
            m[b[i]]++;
            if(m[b[i]]>=2){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<-1<<endl;
        else{
            for(int i=1;i<=j;i++)
                cout<<b[i];
                cout<<endl;
        }
    }
   }
	return 0;
}