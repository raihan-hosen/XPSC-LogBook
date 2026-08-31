#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        sumA += x;
    }

    for (int i = 0; i < m; ++i) {
        long long x;
        cin >> x;
        sumB += x;
    }

    if (sumA == sumB) {
        cout << "Yes" <<endl;
    } else {
        cout << "No" <<endl;
    }

    return 0;
}
