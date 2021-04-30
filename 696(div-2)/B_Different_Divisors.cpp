#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
set<int> s;

void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            s.insert(p);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, d;
    SieveOfEratosthenes(100000);
    cin >> tt;
    while (tt--)
    {
        cin >> d;
        set<int>::iterator it;
        // for(it=s.begin();it!=s.end();it++)
        //   cout<<*it<<" ";
        ll a, b, c, n;
        a = 1;
        it = s.lower_bound(a + d);
        b = *it;
        it = s.lower_bound(b + d);
        c = *it;
        // cout<<a<<" "<<b<<" "<<c<<endl;
        n = a * b * c;
        cout << n << endl;
    }
    return 0;
}