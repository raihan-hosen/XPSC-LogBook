#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    int mishika = 0;
    int chris = 0;

    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            mishika++;
        }
        else if (c > m)
        {
            chris++;
        }
    }

    if (mishika > chris)
    {
        cout << "Mishka" << endl;
    }
    else if (chris > mishika)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}