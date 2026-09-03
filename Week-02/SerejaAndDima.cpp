#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool dimaTurn(ll &dima, ll &left, ll &right, const vector<ll> &a)
{
    if (left > right)
    {
        return false;
    }

    if (a[left] >= a[right])
    {
        dima += a[left];
        left++;
    }
    else
    {
        dima += a[right];
        right--;
    }
    return true;
}

bool serTurn(ll &sereja, ll &dima, ll &left, ll &right, const vector<ll> &a)
{
    if (left > right)
    {
        return false;
    }

    if (a[left] >= a[right])
    {
        sereja += a[left];
        left++;
    }
    else
    {
        sereja += a[right];
        right--;
    }
    return dimaTurn(dima, left, right, a);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sereja = 0, dima = 0;
    ll left = 0, right = n - 1;
    bool turn = true;
    while (turn)
    {
        turn = serTurn(sereja, dima, left, right, a);
    }

    cout << sereja << " " << dima << endl;
}

int main()
{
    solve();
    return 0;
}
