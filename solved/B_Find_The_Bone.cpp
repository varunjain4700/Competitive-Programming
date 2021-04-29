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
    int n, m, k;
    cin >> n >> m >> k;
    int hole[n + 1];
    memset(hole, 0, sizeof(hole));
    int x, y;
    rep(i, m)
    {
        cin >> x;
        hole[x] = 1;
    }
    int bone = 1; //position of bone initially
    rep(i, k)
    {
        cin >> x >> y;
        if (hole[bone] == 1)
        {
            cout << bone << endl;
            return;
        }
        if (x == bone)
            bone = y;
        else if(y==bone)
            bone=x;
    }
    cout << bone << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}