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

bool solve(vector<ll> v, int n, ll k, ll mid)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mid - v[i];
        if (sum > k)
            return false;
    }
    if (sum <= k)
        return true;
    else
        return false;
}

ll binary_search(vector<ll> v, int n, ll k)
{
    ll left = 1;
    ll right = 1e15;
    ll mid = 0;
    while (left < right)
    {
        mid = (left + right + 1) / 2;
        if (solve(v, n, k, mid))
            left = mid;
        else
            right = mid - 1;
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, k;
    //     cin >> tt;
    //    while(tt--){
    cin >> n >> k;
    ll a[n + 1];
    vector<ll> v;
    rep(i, n)
            cin >>
        a[i];
    sort(a, a + n);
    for (int i = n / 2; i < n; i++)
    {
        v.pb(a[i]);
    }
    int m = v.size();
    cout << binary_search(v, m, k) << endl;

    //    }
    return 0;
}