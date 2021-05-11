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
        char a[100001], b[100001];
        cin >> a;
        cin >> b;
        n = strlen(a);
        int c[1001] = {0}, d[1001] = {0};
        int j = 0, k = 0;
        rep(i, n)
        {
            //  cout<<a[i]<<" "<<b[i];
            if (a[i] != b[i])
            {
                if (i % 2 == 0)
                {
                    k++;
                    c[k] = i + 1;
                }
                else
                {
                    j++;
                    d[j] = i + 1;
                }
            }
        }
        // cout<<j<<" "<<k;
        int cnt = 0;
        if (k > 0)
            cnt = 1;
        for (int i = 1; i < k; i++)
        {
            if (c[i + 1] - c[i] == 2)
                continue;
            else
                cnt++;
        }
        if (j > 0)
            cnt++;
        for (int i = 1; i < j; i++)
        {
            if (d[i + 1] - d[i] == 2)
                continue;
            else
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}