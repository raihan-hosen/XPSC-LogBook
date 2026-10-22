#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;

    ll n = s.length();

    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    ll mid = n / 2;

    vector<ll> freq1(26, 0);
    vector<ll> freq2(26, 0);

    for (ll i = 0; i < mid; i++)
    {
        freq1[s[i] - 'a']++;
    }

    for (ll i = mid; i < n; i++)
    {
        freq2[s[i] - 'a']++;
    }

    bool isSquare = true;
    for (ll i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            isSquare = false;
            break;
        }
    }

    if (isSquare)
    {
        string firstHalf = s.substr(0, mid);
        string secondHalf = s.substr(mid);
        if (firstHalf == secondHalf)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}