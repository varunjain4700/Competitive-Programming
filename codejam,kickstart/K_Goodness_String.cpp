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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int score = 0;
    rep(i, n / 2)
    {
        if (s[i] != s[n - i - 1])
            score++;
    }
    int ans = abs(score - k);
    cout << "Case #" << tc << ": " << ans << endl;
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