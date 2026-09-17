#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p[n + 1];
    int ans[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        ans[p[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << endl;

    return 0;
}
