#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    vector<ll> divisors;
    for (ll i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            divisors.push_back(i);
            if (i != a / i)
            {
                divisors.push_back(a / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() < b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << divisors[b - 1] << endl;
    }

    return 0;
}