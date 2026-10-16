#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> x(3);
    cin >> x[0] >> x[1] >> x[2];

    sort(x.begin(), x.end());

    int min_distance = x[2] - x[0];
    cout << min_distance << "\n";

    return 0;
}