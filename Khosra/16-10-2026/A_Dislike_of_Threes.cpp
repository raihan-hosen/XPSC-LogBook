#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(ll k)
{
    vector<ll> valid;
    int current = 1;
    while (valid.size() < 1000)
    {
        if (current % 3 != 0 && current % 10 != 3)
        {
            valid.push_back(current);
        }
        current++;
    }
    return valid[k - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << solve(k) << endl;
    }

    return 0;
}