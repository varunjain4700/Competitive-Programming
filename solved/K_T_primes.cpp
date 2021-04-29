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
set<ll> s;

void SieveOfEratosthenes()
{
    ll n = 1e6;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    s.clear();
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            s.insert(p * p);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll x[n + 1];
    rep(i, n)
            cin >>
        x[i];
    SieveOfEratosthenes();
    rep(i, n)
    {
        if (s.find(x[i]) != s.end())
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}