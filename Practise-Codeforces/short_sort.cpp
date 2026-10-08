#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s == "abc" || s == "acb" || s == "bac" || s == "cba") {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}