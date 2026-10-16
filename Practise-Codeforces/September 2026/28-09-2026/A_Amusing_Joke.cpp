#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string combined = s1 + s2;

    sort(combined.begin(), combined.end());
    sort(s3.begin(), s3.end());

    if (combined == s3)
    {
        cout << "YES" << endl;
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
    solve();
    return 0;
}