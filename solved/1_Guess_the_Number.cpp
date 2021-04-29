 #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n" 
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)

void binary_search()
{
    int left=1;
    int right=1000000;
    int mid;
    string s;
    while(left<right)
    {
        mid=(left+right+1)/2;
        cout<<mid<<endl;
        fflush(stdout);
        cin>>s;
        if(s[0]=='<')
            right=mid-1;
        else
            left=mid;
    }
    cout<<"! "<<left<<endl;
    fflush(stdout);
    return;
}


int main() {
    binary_search();
	return 0;
}