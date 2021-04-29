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
    int n, q, k;
    cin >> n >> k >> q;
    int l, r;
    int a[200005];
    memset(a, 0, sizeof(a));
    rep(i, n)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for (int i = 1; i <= 200000; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= 200000; i++)
    {
        if (a[i] >= k)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 1; i <= 200000; i++)
    {
        a[i] += a[i - 1];
    }
    rep(i, q)
    {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}