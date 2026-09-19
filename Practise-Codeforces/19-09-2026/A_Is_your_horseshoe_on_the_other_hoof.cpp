#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> colors;
    for (int i = 0; i < 4; ++i)
    {
        int s;
        cin >> s;
        colors.insert(s);
    }

    cout << 4 - colors.size() << endl;

    return 0;
}