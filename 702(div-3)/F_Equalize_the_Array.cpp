#include <bits/stdc++.h>
#include <unordered_map>
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt, n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        ll a[n + 1];
        map<ll, ll> m;
        set<ll> s;
        rep(i, n)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        map<ll, ll>::iterator it, it1;
        ;
        ll cnt[200002], ans = INT_MAX;
        memset(cnt, 0, sizeof(cnt));
        for (it = m.begin(); it != m.end(); it++)
        {
            cnt[it->second] += 1;
            s.insert(it->second);
            //  cout<<it->second<<" ";
        }
        ll x = 0;
        set<ll>::iterator it2;
        it2 = s.end();
        it2--;
        for (; it2 != s.begin(); it2--)
        {
            cnt[*it2] += x;
            x = cnt[*it2];
            // cout<<cnt[*it2]<<" ";
        }
        cnt[*it2] += x;
        for (it2 = s.begin(); it2 != s.end(); it2++)
        {
            // cout<<cnt[*it2]<<" ";
            ans = min(ans, n - cnt[*it2] * (*it2));
        }
        cout << ans << endl;
    }
    return 0;
}