#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, k;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> k;
        if (n > k)
        {
            if (n % k == 0)
                k = n;
            else
                k = ((n / k) + 1) * k;
        }
        // cout<<k<<endl;
        if (k % n == 0)
            cout << k / n << endl;
        else
            cout << (k / n) + 1 << endl;
    }
    return 0;
}