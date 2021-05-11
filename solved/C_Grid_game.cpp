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
    string s;
    cin >> s;
    int n = s.size();
    int h_tile = 0, v_tile = 0;
    rep(i, n)
    {
        if (s[i] == '0')
        {
            if (v_tile == 0)
                cout << 2 << " " << 1 << endl;
            else if (v_tile == 1)
                cout << 2 << " " << 2 << endl;
            else if (v_tile == 2)
                cout << 2 << " " << 3 << endl;
            else
                cout << 2 << " " << 4 << endl;
            v_tile++;
            v_tile = v_tile % 4;
        }
        else
        {
            if (h_tile == 0)
                cout << 1 << " " << 1 << endl;
            else
                cout << 1 << " " << 3 << endl;
            h_tile++;
            h_tile = h_tile % 2;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}