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
    vector<int> a;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.pb(x);
    }
    int possible = 1, ans = n - 1;
    for (int i = 0; i < n; i++)
    {
        possible = 1;
        map<int, int> m;
        for (int j = 0; j < i; j++)
        {
            m[a[j]]++;
            if (m[a[j]] == 2)
                possible = 0;
        }
        int j = n - 1;
        for (; j >= i; j--)
        {
            if (m[a[j]] >= 1)
                break;
            m[a[j]]++;
        }
        if (possible)
            ans = min(ans, j - i + 1);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}