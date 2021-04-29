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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            zero++;
        else
            one++;
    }
    int cnt[n + 1];
    memset(cnt, 0, sizeof(cnt));
    for (int i = n - 1; i >= 0; i--)
    {
       // cout << zero << " " << one << endl;
        if (zero != one) //cnt of zeroes and ones are not same
        {
            if (a[i] == b[i]) //bits of a and b  match
            {
                if (cnt[i] % 2 == 0)
                {
                    if (a[i] == '0')
                        zero--;
                    else
                        one--;
                    cnt[i - 1] = cnt[i];
                }
                else
                {
                    //cout << i << " ";
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                if (cnt[i] % 2 == 1)
                {
                    cnt[i - 1] = cnt[i];
                    if (a[i] == '0')
                        one--;
                    else
                        zero--;
                }
                else
                {
                    //cout << i << " ";
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else //cnt of zeroes and ones are same
        {
            if (a[i] == b[i])
            {
                if (cnt[i] % 2 == 0)
                {
                    if (a[i] == '0')
                        zero--;
                    else
                        one--;
                    cnt[i - 1] = cnt[i];
                }
                else
                {
                    cnt[i - 1] = cnt[i] + 1;
                    if (a[i] == '0')
                        zero--;
                    else
                        one--;
                }
            }
            else // bits of a and b don't match
            {
                if (cnt[i] % 2 == 0)
                {
                    cnt[i - 1] = cnt[i] + 1;
                    if (a[i] == '0')
                        zero--;
                    else
                        one--;
                    int temp = zero;
                    zero = one;
                    one = temp;
                }
                else
                {
                    cnt[i - 1] = cnt[i];
                    if (a[i] == '0')
                        one--;
                    else
                        zero--;
                }
            }
        }
    }
    cout << "YES" << endl;
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