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
    //a*a+b*b=c*c
    //a*a=c*c-b*b;
    //(a*a)*1==(c+b)*(c-b)
    ll n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << -1 << endl;
    else if (n % 2 == 1) //c-b=1  and c+b=a*a;
        cout << ((n * n) - 1) / 2 << " " << ((n * n) + 1) / 2 << endl;
    else //c-b=2 and c+b=(a*a)/2
    {
        cout << ((n * n) / 4) - 1 << " " << ((n * n) / 4) + 1 << endl;
    }

    return 0;
}