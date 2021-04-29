#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
//#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

int query(int x){
    int y;
    cout<<"? "<<x<<endl;
    cin>>y;
    return y;
}
void solve(int n){
    int left=1;
    int right=n;
    int mid;
    while(left<right){
        mid=(left+right)/2;
        int a=query(mid);
        int b=query(mid+1);
        if(a<b)
        {
            right=mid;
        }
        else
        {
            left=mid+1;
        }   
    }
    cout<<"! "<<left<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve(n);

     
	return 0;
}