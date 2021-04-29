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
int ans = 0;

void match(string a, string b, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
                break;
        }
        if (j == m)
            ans = max(ans, m);
    }
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    if (m > n)
    {
        string temp;
        temp = b;
        b = a;
        a = temp;
    }
    n = a.size(), m = b.size();
    ans = 0;
    for (int i = 0; i < m; i++)
    {
        string substring;
        for (int j = i; j < m; j++)
        {
            char temp = b[j];
            substring += temp;
            match(a, substring, n, substring.size());
        }
    }
    cout << n - ans + m - ans << endl;
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