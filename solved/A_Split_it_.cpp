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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int cnt = n;
    for (int i = 0; i < k; i++)
    {
        if (cnt<=0||s[i] != s[n - i - 1])
        {
            cout << "NO" << endl;
            return;
        }
        cnt -= 2;
    }
    if (cnt<= 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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