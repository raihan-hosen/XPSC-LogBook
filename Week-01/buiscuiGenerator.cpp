#include <iostream>
using namespace std;
using ll = long long int;

int main()
{
    ll A, B, T;
    cin >> A >> B >> T;

    ll count = T / A;
    cout << count * B << endl;

    return 0;
}