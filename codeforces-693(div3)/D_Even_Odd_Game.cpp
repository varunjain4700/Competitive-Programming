#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
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
    ll a[n+1];
    rep(i,n)
        cin>>a[i];
    priority_queue<ll>odd,even;
    rep(i,n)
    {
        if((a[i]&1)==1)
            odd.push(a[i]);
        else 
            even.push(a[i]);
    }
    ll alice_score=0,bob_score=0;
    int chance=0;
    while(!odd.empty()||!even.empty())
    {
        if(chance%2==0)
        {
        if(even.empty())
        {
            odd.pop();
        }
        else if(odd.empty())
        {
            alice_score+=even.top();
            even.pop();
        }
        else if(even.top()>odd.top())
        {
            alice_score+=even.top();
            even.pop();
        }
        else
        {
            odd.pop();
        }
        }
        else
        {
            if(odd.empty())
        {
            even.pop();
        }
        else if(even.empty())
        {
            bob_score+=odd.top();
            odd.pop();
        }
         else if(even.top()<odd.top())
        {
            bob_score+=odd.top();
            odd.pop();
        }
        else
        {
            even.pop();
        }      
        }
        chance++;   
    }
   // cout<<alice_score<<" "<<bob_score<<endl;
    if(alice_score>bob_score)
        cout<<"Alice"<<endl;
    else if(bob_score>alice_score)
        cout<<"Bob"<<endl;
    else
        cout<<"Tie"<<endl;
    
    
     
    }
	return 0;
}