#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(ll s, ll t)
{
    int count = 0;

    for (int a = 0; a <= s; ++a)
    {
        for (int b = 0; a + b <= s; ++b)
        {
            for (int c = 0; a + b + c <= s; ++c)
            {
                if (a * b * c <= t)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

int main()
{
    ll s, t;
    cin >> s >> t;
    solve(s, t);
    return 0;
}