#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n, m, r, c;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> m >> r >> c;
        ll row = max(abs(1 - r), abs(n - r));
        ll col = max(abs(1 - c), abs(m - c));
        cout << row + col << endl;
    }
    return 0;
}