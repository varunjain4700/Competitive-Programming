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

///HEAVY IMPLEMENTATION...
void solve()
{
    int h, m;
    string s;
    cin >> h >> m >> s;
    int h1, h2, m1, m2;
    h1 = s[0] - '0';
    h2 = s[1] - '0';
    m1 = s[3] - '0';
    m2 = s[4] - '0';
    int a, b;
    vector<int> hour, min;
    for (int i = 0; i < m; i++) //valid minutes
    {
        a = i % 10;
        if (a == 3 || a == 4 || a == 6 || a == 7 || a == 9)
            continue;
        int j = i;
        j /= 10;
        b = j % 10;
        if (b == 3 || b == 4 || b == 6 || b == 7 || b == 9)
            continue;
        min.pb(i);
    }
    for (int i = 0; i < h; i++) //valid hours
    {
        a = i % 10;
        if (a == 3 || a == 4 || a == 6 || a == 7 || a == 9)
            continue;
        int j = i;
        j /= 10;
        b = j % 10;
        if (b == 3 || b == 4 || b == 6 || b == 7 || b == 9)
            continue;
        hour.pb(i);
    }

    int refr, hr;
    int i;
    for (i = 0; i < min.size(); i++) //calculating time(minutes) that can have valid reflection
    {
        if (min[i] >= m1 * 10 + m2)
        {
            int x = min[i];
            int z = x % 10;
            if (z == 2)
                z = 5;
            else if (z == 5)
                z = 2;
            x /= 10;
            int y = x % 10;
            if (y == 2)
                y = 5;
            else if (y == 5)
                y = 2;
            hr = z * 10 + y;
            if (hr < h)
                break;
        }
    }
    refr = min[i];
    if (i == min.size()) //if no answer(of minutes) less than m possible then move to next day
        refr = 0;
    //cout << refr<< " ";
    //   cout << endl;
    int refh = 0;
    int newh = 0, j;
    for (j = 0; j < hour.size(); j++)
    {
        int x = hour[j];
        if (x == h1 * 10 + h2 && refr < m1 * 10 + m2) //checking if hour is incremented or not
            continue;
        if (x >= h1 * 10 + h2)
        {
            int z = x % 10;
            if (z == 2)
                z = 5;
            else if (z == 5)
                z = 2;
            x /= 10;
            int y = x % 10;
            if (y == 2)
                y = 5;
            else if (y == 5)
                y = 2;
            newh = z * 10 + y;
            if (newh < m)
                break;
        }
    }
    if (j == hour.size())
        refh = 0;
    else
        refh = hour[j];
    if (refh > h1 * 10 + h2 || (refh == 0 && refh != h1 * 10 + h2)) //if hr is greater than given hr then best answer will be to give minutes as 0.
        refr = 0;
    if (refh / 10 == 0)
        cout << 0;
    cout << refh << ":";
    if (refr / 10 == 0)
        cout << 0;
    cout << refr << endl;
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