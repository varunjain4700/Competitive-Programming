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
    char s[100001];
    cin>>s;
    int n=strlen(s);
    int cnt=0;
    int i,j;
    j=2;
    for( i=0;i<n-1;i++){
        if(j>n-1)
            break;
        if(s[i]==s[i-2]&&i>2)
            cnt++;
        if(s[i]==s[i+1]&&s[i+1]==s[j]){
            s[i+1]='?';
            s[j]='?';
            cnt+=2;
        }
        else if(s[i]==s[i+1]){
            s[i+1]='?';
            cnt++;
        }
        else if(s[i+1]==s[j]){
            s[j]='?';
            cnt++;
        }
        else if(s[i]==s[j]){
            s[j]='?';
            cnt++;

        }
        j+=3;
        i+=2;
    }
    if(i<n-1){
        if(s[i]==s[i+1]&&s[i+1]==s[i-1])
            cnt+=2;
        else if(s[i]==s[i+1]||(s[i]==s[i-2]&&s[i+1]==s[i-3])||s[i+1]==s[i-1])
            cnt++;
    }
    if(cnt==0&&n>1){
        int i;
        for( i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
                break;
        }
        if(i==n/2)
            cnt++;
    }
    cout<<cnt<<endl;

    }
	return 0;
}