#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 1 / (1 + x * x);
}

int main()
{
    double a, b, h, x, fx, sum = 0;
    double result, exact;
    int n, i, w;

    cin >> a;
    cin >> b;
    cin >> n;

    if (n <= 0)
    {
        cout << "\nn must be positive.\n";
        return 0;
    }
    h = (b - a) / n;
    cout << fixed << setprecision(6);
    cout << "\nStep size h = " << h << endl;
    cout << setw(4) << "i" << setw(10) << "x"
         << setw(12) << "f(x)"
         << setw(8) << "Weight" << endl;
    for (i = 0; i <= n; i++)
    {
        x = a + i * h;
        fx = f(x);
        w = (i == 0 || i == n) ? 1 : 2;
        sum += w * fx;
        cout << setw(4) << i << setw(10) << x
             << setw(12) << fx
             << setw(8) << w << endl;
    }
    result = h / 2 * sum;
    exact = atan(b) - atan(a);

    cout << "\nIntegral (Trapezoidal) = "
         << result << endl;
    cout << "Exact value            = "
         << exact << endl;
    cout << "Absolute error         = "
         << fabs(exact - result) << endl;
    return 0;
}
