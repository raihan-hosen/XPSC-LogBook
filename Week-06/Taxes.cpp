#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
