#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;

    ll hundred = 0, twenty = 0, ten = 0, five = 0, one = 0;
    hundred = n / 100;
    n = n % 100;
    twenty = n / 20;
    n = n % 20;
    ten = n / 10;
    n = n % 10;
    five = n / 5;
    n = n % 5;

    cout << hundred + twenty + ten + five + n << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}