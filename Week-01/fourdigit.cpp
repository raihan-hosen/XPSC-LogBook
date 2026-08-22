#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(string a)
{
    ll n = a.size();
    ll size = 4 - n;
    if (size > 0)
    {
        a.insert(0, size, '0');
    }
    cout << a << endl;
}

int main()
{
    string a;
    cin >> a;
    solve(a);
    return 0;
}