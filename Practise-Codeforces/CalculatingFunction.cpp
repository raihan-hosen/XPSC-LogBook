#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll sum = 0;
    if (n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = -(n + 1) / 2;
    }

    cout << sum << endl;

    return 0;
}
