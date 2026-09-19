#include <iostream>
#include <cstring>

using namespace std;

long long memo[35][35];

long long nCr(int n, int r) {
    if (r > n || r < 0) {
        return 0;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    if (memo[n][r] != -1) {
        return memo[n][r];
    }
    return memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(memo, -1, sizeof(memo));

    int n, r;
    if (cin >> n >> r) {
        cout << nCr(n, r) << endl;
    }

    return 0;
}
