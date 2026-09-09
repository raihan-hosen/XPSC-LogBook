#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, bool> seen;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (seen[s]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            seen[s] = true;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
