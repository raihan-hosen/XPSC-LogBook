#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(vector<int> v, ll n, ll k)
{
    sort(v.begin(), v.end(), greater<ll>());

    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] > 0)
        {
            sum += v[i];
        }
        else
        {
            break;
        }
    }

    cout << sum << endl;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    solve(v, n, k);
    return 0;
}