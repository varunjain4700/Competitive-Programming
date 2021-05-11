#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        ll w[n + 1];
        ll sum = 0;
        rep(i, n)
        {
            cin >> w[i];
            sum += w[i];
        }
        int a, b;
        int cnt[n + 1];
        memset(cnt, 0, sizeof(cnt));
        rep(i, n - 1)
        {
            cin >> a >> b;
            cnt[a]++;
            cnt[b]++;
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(make_pair(w[i], cnt[i + 1]));
        }
        sort(v.begin(), v.end());
        ll ans[n + 1];
        memset(ans, 0, sizeof(ans));
        int k = 1;
        ans[0] = sum;
        for (int i = n - 1; i >= 0; i--)
        {
            //  cout<<v[i].first<<" "<<v[i].second<<endl;
            if (v[i].second > 1)
            {
                ans[k] += ans[k - 1] + v[i].first;
                v[i].second--;
                if (v[i].second > 1)
                    i++;
                k++;
            }
            if (k == n - 1)
                break;
        }
        rep(i, n - 1)
                cout
            << ans[i] << " ";
        cout << endl;
    }
    return 0;
}