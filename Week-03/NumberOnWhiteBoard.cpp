#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }

    cout << 2 << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        cout << a << " " << b << endl;

        int res = (a + b + 1) / 2;
        pq.push(res);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
