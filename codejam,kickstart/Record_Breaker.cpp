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
int tc=0;

void solve()
{
    tc++;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pre_max = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (a[i] > pre_max)
                cnt++;
        }
        else if (a[i] > pre_max && a[i] > a[i + 1])
            cnt++;
        pre_max = max(pre_max, a[i]);
    }
    cout << "Case #"<<tc<<": "<<cnt << endl;
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