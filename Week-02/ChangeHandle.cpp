#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin>>q;
    vector<pair<string, string>> v;

    while (q--) {
        string a, b;
        cin >> a >> b;
        bool found = false;
        for (auto& p : v) {
            if (p.second == a) {
                p.second = b;
                found = true;
                break;
            }
        }
        if (!found) {
            v.push_back({a, b});
        }
    }

    cout << v.size() << "\n";
    for (auto& p : v) {
        cout << p.first << " " << p.second << "\n";
    }
}

int main() {
    solve();
    return 0;
}
