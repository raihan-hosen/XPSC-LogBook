#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    vector<ll> d(n);
    for (int k = 0; k < n; ++k)
    {
        cin >> d[k];
    }

    int i = 0, j = n - 1;
    ll sum1 = d[0];
    ll sum3 = d[n - 1];
    ll maxSum = 0;

    while (i < j)
    {
        if (sum1 == sum3)
        {
            maxSum = sum1;
            i++;
            j--;
            if (i < j)
            {
                sum1 += d[i];
                sum3 += d[j];
            }
        }
        else if (sum1 < sum3)
        {
            i++;
            sum1 += d[i];
        }
        else
        {
            j--;
            sum3 += d[j];
        }
    }

    cout << maxSum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}