#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    map<ll, int> frequency;
    ll totalElements = n1 + n2 + n3;

    for (ll i = 0; i < totalElements; ++i)
    {
        ll x;
        cin >> x;
        frequency[x]++;
    }

    vector<ll> result;
    for (auto &pair : frequency)
    {
        if (pair.second >= 2)
        {
            result.push_back(pair.first);
        }
    }

    cout << result.size() << endl;
    for (ll value : result)
    {
        cout << value << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}