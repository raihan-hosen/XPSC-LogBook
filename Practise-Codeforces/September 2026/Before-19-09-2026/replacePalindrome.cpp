#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin>>s;

    int n = s.length();
    int l = 0, r = n - 1;

    while (l <= r) {
        if (s[l] == '?' && s[r] == '?') {
            s[l] = 'a';
            s[r] = 'a';
        } else if (s[l] == '?') {
            s[l] = s[r];
        } else if (s[r] == '?') {
            s[r] = s[l];
        } else if (s[l] != s[r]) {
            cout << -1 << "\n";
            return 0;
        }
        l++;
        r--;
    }

    cout << s << "\n";

    return 0;
}
