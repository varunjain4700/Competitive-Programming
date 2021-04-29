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
int tc = 0;

void solve()
{
    tc++;
    int n;
    cin >> n;
    vector<int> h;
    int x;
    rep(i, n)
    {
        cin >> x;
        h.pb(x);
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (h[i] > h[i - 1] && h[i] > h[i + 1])
            cnt++;
    }
    cout << "Case #" << tc << ": " << cnt << endl;
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