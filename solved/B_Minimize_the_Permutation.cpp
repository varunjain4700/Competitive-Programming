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

void swap(int *a, int *b)
{
    //cout << *a << " " << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    //cout<<*a<<" "<<*b<<endl;
}

void solve()
{
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i - 1] > a[i])
        {
            swap(&a[i - 1], &a[i]);
            b[i - 1] = 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i] && b[i] == 0)
            swap(&a[i], &a[i + 1]);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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