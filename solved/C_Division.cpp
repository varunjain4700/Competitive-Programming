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
vector<pair<ll, ll> > qq;

void factorise(ll n)
{
    qq.clear();
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
        }
        qq.pb(mp(i, cnt));
    }
    if (n > 1)
    {
        qq.pb(mp(n, 1));
    }
}

void solve()
{
    ll p, q, p1;
    cin >> p >> q;
    p1 = p;
    factorise(q);
    //sort(qq.begin(), qq.end());
    //cout<<qq.size();
    ll ans = 0;
    for (int i = 0; i < qq.size(); i++)
    {
        //cout<<qq[i].first<<" ";
        int cnt = 0;
        while (p % qq[i].first == 0)
        {
            p /= qq[i].first;
            cnt++;
        }
        p = p1;
        if (cnt >= qq[i].second)
        {
            // cout<<qq[i].first<<" "<<cnt<<endl;
            while (cnt >= qq[i].second)
            {
                p /= qq[i].first;
                cnt--;
            }
        }
        if (p % q != 0 && p1 % p == 0)
        {
            //cout<<p<<" ";
            ans = max(ans, p);
        }
        p = p1;
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