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

bool check(int a[], int n, int mid)
{
    int num = 0;
    int l = mid;
    int r = n - 1;
    while (l < r)
    {
        if (min(a[l], a[r]) < num)
            return false;

        if (a[l] <= a[r])
        {
            num = a[l];
            l++;
        }
        else
        {
            num = a[r];
            r--;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int left = 0;
    int right = n - 1, ans = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (check(a, n, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
       // cout<<ans<<", ";
    }
    cout << ans << endl;
    // int idx = n - 1;
    // while (idx > 0 && a[idx - 1] >= a[idx])
    //     idx--;
    // while (idx > 0 && a[idx - 1] <= a[idx])
    //     idx--;
    // cout << idx << endl;
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