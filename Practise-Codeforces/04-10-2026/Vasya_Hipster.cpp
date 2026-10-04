#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b;
    cin >> a >> b;
 
    int diff = min(a, b);
    int same = (max(a, b) - diff) / 2;
 
    cout << diff << " " << same << endl;
 
    return 0;
}
