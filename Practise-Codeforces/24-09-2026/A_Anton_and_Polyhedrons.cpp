#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;

    ll totalFaces = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            totalFaces += 4;
        }
        else if (s == "Cube")
        {
            totalFaces += 6;
        }
        else if (s == "Octahedron")
        {
            totalFaces += 8;
        }
        else if (s == "Dodecahedron")
        {
            totalFaces += 12;
        }
        else if (s == "Icosahedron")
        {
            totalFaces += 20;
        }
    }

    cout << totalFaces << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}