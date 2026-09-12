#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> ans(n + 1);
    set<int> unique_elements;

    for (int i = n; i >= 1; i--) {
        unique_elements.insert(a[i]);
        ans[i] = unique_elements.size();
    }

    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }

    return 0;
}
