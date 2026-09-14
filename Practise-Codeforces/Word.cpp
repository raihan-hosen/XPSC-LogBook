#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s;
    cin >> s;
    ll lowerCount = 0, upperCount = 0;

    for (char c : s)
    {
        if (islower(c))
        {
            lowerCount++;
        }
        else if (isupper(c))
        {
            upperCount++;
        }
    }

    if (lowerCount >= upperCount)
    {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                  { return tolower(c); });
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                  { return toupper(c); });
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
