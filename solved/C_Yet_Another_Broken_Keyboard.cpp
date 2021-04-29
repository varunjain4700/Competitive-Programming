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
    ll n, k;
    string s;
    cin >> n >> k >> s;
    char x;
    set<char> ss;
    rep(i, k)
    {
        cin >> x;
        ss.insert(x);
    }
    vector<int> a;
    rep(i, n)
    {
        if (ss.find(s[i]) == ss.end())
        {
            s[i] = '?';
            a.pb(n - i);
        }
        //cout << s[i];
    }
    ll ans = 0;
    if (a.size() == 0)
        ans = 0;
    else
    {
        int j = 0;
        rep(i, n)
        {
            if (s[i] == '?')
            {
                ans += n - i;
                j++;
            }
            else
            {
                ans += a[j];
            }
            //cout<<ans<<" ";
            if (j == a.size())
                break;
        }
    }
    cout << (n * (n + 1)) / 2 - ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}