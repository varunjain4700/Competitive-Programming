#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
//#define endl "\n"
#define mod 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
int tt, n, q;

int query(int a, int b, int c)
{
    int median;
    cout << a << " " << b << " " << c << endl;
    cin >> median;
    if (median == -1)
        exit(0);
    return median;
}

void solve()
{
    int med;
    med = query(1, 2, 3);
    vector<int> v, v1;
    if (med == 1)
    {
        v.pb(2);
        v.pb(1);
        v.pb(3);
    }
    else if (med == 2)
    {
        v.pb(1);
        v.pb(2);
        v.pb(3);
    }
    else
    {
        v.pb(1);
        v.pb(3);
        v.pb(2);
    }
    rep(i, v.size())
    {
        v1.pb(v[i]);
    }

    for (int i = 4; i <= n; i++)
    {
        int idx;
        for (int j = 0; j < v.size() - 2; j++)
        {
            med = query(v[j], v[j + 1], i);
            if (med == i)
            {
                auto it = find(v1.begin(), v1.end(), i);
                if (it != v1.end())
                {
                    idx = it - v1.begin();
                    if (idx != j + 1)
                    {
                        v1.erase(it);
                    }
                    else
                        continue;
                }

                v1.insert(v1.begin() + j + 1, i);
            }
            else if (med == v[j])
            {
                auto it = find(v1.begin(), v1.end(), i);
                // if (it != v1.end())
                // {
                //     idx = it - v1.begin();
                //     if (idx != j)
                //     {
                //         v1.erase(it);
                //     }
                //     else
                //         continue;
                // }
                if (it == v1.end())
                    v1.insert(v1.begin() + j, i);
            }
            else
            {
                auto it = find(v1.begin(), v1.end(), i);
                if (it != v1.end())
                {
                    idx = it - v1.begin();
                    if (idx != j + 2)
                    {
                        v1.erase(it);
                    }
                    else
                        continue;
                }
                v1.insert(v1.begin() + j + 2, i);
            }
            //       rep(i, v1.size())
            // {
            //     cout<<v1[i]<<" ";
            // }
            // cout<<endl;
        }
        int s = v1.size();
        int y = v1[s - 1];
        int z = v1[s - 3];
        med = query(v1[s - 3], v1[s - 2], v1[s - 1]);
        if (med == v1[s - 1])
        {
            auto it = find(v1.begin(), v1.end(), v1[s - 1]);
            if (it != v1.end())
            {
                idx = it - v1.begin();
                if (idx != s - 2)
                {
                    v1.erase(it);
                }
                else
                    continue;
            }
            v1.insert(v1.begin() + s - 2, y);
        }
        else if (med == v1[s - 3])
        {
            auto it = find(v1.begin(), v1.end(), v1[s - 3]);
            if (it != v1.end())
            {
                idx = it - v1.begin();
                if (idx != s - 2)
                {
                    v1.erase(it);
                }
                else
                    continue;
            }
            v1.insert(v1.begin() + s - 2, z);
        }

        v.clear();
        rep(i, v1.size())
        {
            // cout<<v1[i]<<" ";
            v.pb(v1[i]);
        }
        //cout<<endl;
    }
    rep(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int x;
    cin >> x;
    if (x == -1)
        exit(0);
    return;
}

int main()
{
    cin >> tt >> n >> q;
    while (tt--)
        solve();

    return 0;
}