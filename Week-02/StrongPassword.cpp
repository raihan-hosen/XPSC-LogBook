#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool inserted = false;
    
    for (int i = 0; i < s.length() - 1; ++i) {
        cout << s[i];
        if (!inserted && s[i] == s[i + 1]) {
            char diff_char = (s[i] == 'a') ? 'b' : 'a';
            cout << diff_char;
            inserted = true;
        }
    }
    cout << s.back();
    
    if (!inserted) {
        char diff_char = (s.back() == 'a') ? 'b' : 'a';
        cout << diff_char;
    }
    cout << endl;
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
