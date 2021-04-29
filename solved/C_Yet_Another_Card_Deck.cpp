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
    int n, q, x;
    cin >> n >> q;
    int a[n + 1];
    int pos[51];
    bool present[51];
    memset(present, 0, sizeof(present));
    rep(i, n)
    {
        cin >> a[i];
        if (present[a[i]] == 0)
        {
            pos[a[i]] = i + 1;
            present[a[i]] = 1;
        }
    }
    rep(i, q)
    {
        cin >> x;
        for (int i = 1; i <= 50; i++)
        {
            if (pos[x] > pos[i])
                pos[i]++;
        }
        cout << pos[x] << " ";
        pos[x] = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}