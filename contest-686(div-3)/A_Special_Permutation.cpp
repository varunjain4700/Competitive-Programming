#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            for (int i = n; i >= 1; i--)
            {
                if (i == (n + 1) / 2)
                    continue;
                cout << i << " ";
            }
            if (n > 1)
                cout << (n + 1) / 2 << endl;
        }
    }
    return 0;
}