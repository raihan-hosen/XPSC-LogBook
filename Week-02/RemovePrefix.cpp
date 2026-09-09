#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    set<int> seen;
    int remove_idx = 0;
    
    for (int i = n - 1; i >= 0; --i) {
        if (seen.count(a[i])) {
            remove_idx = i + 1; 
            break;
        }
        seen.insert(a[i]);
    }
    
    cout << remove_idx << endl;
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
