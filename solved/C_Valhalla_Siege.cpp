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
    ll n, q;
    cin >> n >> q;
    vector<ll> v;
    ll x;
    rep(i, n)
    {
        cin >> x;
        v.pb(x);
    }
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }
    ll curr_sum = 0;
    rep(i, q)
    {
        cin >> x;
        curr_sum += x;
        if (curr_sum >= v[n - 1])
        {
            curr_sum = 0;
            cout << n << endl;
        }
        else
        {
            int dead = upper_bound(v.begin(), v.end(), curr_sum) - v.begin();
            // cout<<dead<<" ";
            int alive = n - dead;
            cout << alive << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}