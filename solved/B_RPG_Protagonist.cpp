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

void swap(ll *a, ll *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve()
{
    ll capacity1, capacity2;
    cin >> capacity1 >> capacity2;
    ll cnt1, cnt2, weight1, weight2;
    cin >> cnt1 >> cnt2;
    cin >> weight1 >> weight2;
    ll ans = 0;
    if (weight1 > weight2)
    {
        swap(&weight1, &weight2);
        swap(&capacity1, &capacity2);
        swap(&cnt1, &cnt2);
    }
    for (int i = 0; i <= min(cnt1, capacity1 / weight1); i++)
    {
        ll w1 = min(cnt2, (capacity1 - i * weight1) / weight2);
        ll s2 = min(cnt1 - i, capacity2 / weight1);
        ll w2 = min(cnt2 - w1, (capacity2 - (s2 * weight1)) / weight2);
        ans = max(ans, i + w1 + s2 + w2);
    }

    cout << ans << endl;
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