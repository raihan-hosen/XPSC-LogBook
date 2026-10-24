#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    int l = 0;
    map<ll, int> freq;

    for (int r = 0; r < n; r++)
    {
        freq[a[r]]++;

        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                freq.erase(a[l]);
            }
            l++;
        }
        ans += (r - l + 1);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}