#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    rep(i, n)
    {
        cin >> a[i] >> b[i];
    }
    int t[n + 1];
    rep(i, n)
            cin >>
        t[i];
    int arrival = 0, depart = 0;
    rep(i, n)
    {
        if(i==0)
            arrival=a[i]+t[i];
        else
        arrival = depart + (a[i] - b[i - 1]) + t[i];
        int stay = (int)ceil((b[i] - a[i]) / (double)2);
        //cout<<stay<<" ";
        depart = max(stay + arrival, b[i]);
        //cout<<arrival<<" "<<depart<<endl;
    }
    cout << arrival << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}