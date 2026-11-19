#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    for (char ch : s)
    {
        char lowerCh = tolower(static_cast<unsigned char>(ch));
        if (lowerCh == 'a' || lowerCh == 'o' || lowerCh == 'y' || lowerCh == 'e' || lowerCh == 'u' || lowerCh == 'i')
        {
            continue;
        }
        cout << '.' << lowerCh;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}