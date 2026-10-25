#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    set<ll> s;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    
    if (s.size() == n) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
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
