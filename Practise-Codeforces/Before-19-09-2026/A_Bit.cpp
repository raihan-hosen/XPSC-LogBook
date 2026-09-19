#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}