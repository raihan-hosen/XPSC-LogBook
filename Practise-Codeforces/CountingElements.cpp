#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_set<int> elements(a.begin(), a.end());
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (elements.count(a[i] + 1))
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}