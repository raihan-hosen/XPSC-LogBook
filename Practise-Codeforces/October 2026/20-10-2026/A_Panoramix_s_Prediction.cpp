#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int nextPrime = n + 1;
    while (!isPrime(nextPrime))
    {
        nextPrime++;
    }

    if (nextPrime == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}