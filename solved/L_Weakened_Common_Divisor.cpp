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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    rep(i, n)
            cin >>
        a[i] >> b[i];
    set<int> s;
    for (int i = 2; i * i <= a[0]; i++)
    {
        if (a[0] % i == 0)
        {
            s.insert(i);
            if (a[0] / i != i)
                s.insert(a[0] / i);
        }
    }
    s.insert(a[0]);
    for (int i = 2; i * i <= b[0]; i++)
    {
        if (b[0] % i == 0)
        {
            s.insert(i);
            if (b[0] / i != i)
                s.insert(b[0] / i);
        }
    }
    s.insert(b[0]);
    set<int>::iterator it;
    it = s.begin();
    for (; it != s.end(); it++)
    {
        //cout<<*it<<" ";
        int i = 1;
        for (; i < n; i++)
        {
            if (a[i] % (*it) && b[i] % (*it))
                break;
        }
        if (i == n)
            break;
    }
    if (it != s.end())
        cout << *it;
    else
    {
        cout << -1;
    }

    return 0;
}