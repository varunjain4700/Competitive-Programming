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
    int n, k;
    cin >> n >> k;
    int a = n / 2;
    if (a % 2 == 1 && a != 1)
        a--;
    //cout<<a<<endl;
    int sum = n - a;
    int x, y;
    vector<int> fac;
    //cout<<sum<<" ";
    for (int i = 1; i <= sqrt(a); i++)
    {
        if ((a % i) == 0)
        {
            fac.pb(i);
            fac.pb(a / i);
            // cout<<a/i<<endl;
        }
    }
    sort(fac.begin(), fac.end());
    int i = 0, j = fac.size() - 1;
    while (i <= j)
    {
        if (fac[i] + fac[j] == sum)
            break;
        else if (fac[i] + fac[j] < sum)
            i++;
        else
            j--;
        //cout<<i<<" "<<j<<endl;
    }
    if (fac[i] + fac[j] != sum)
    {
        a = (n - 1) / 2;
        sum = n - a;
        fac.clear();
        //cout<<sum<<" ";
        for (int i = 1; i <= sqrt(a); i++)
        {
            if ((a % i) == 0)
            {
                fac.pb(i);
                fac.pb(a / i);
                // cout<<a/i<<endl;
            }
        }
        sort(fac.begin(), fac.end());
        i = 0, j = fac.size() - 1;
        while (i <= j)
        {
            if (fac[i] + fac[j] == sum)
                break;
            else if (fac[i] + fac[j] < sum)
                i++;
            else
                j--;
            //cout<<i<<" "<<j<<endl;
        }
        cout << a << " " << fac[i] << " " << fac[j] << endl;
    }
    else
        cout << a << " " << fac[i] << " " << fac[j] << endl;
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