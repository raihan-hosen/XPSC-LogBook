#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[50], y[50];
    double sx = 0, sy = 0, sxy = 0, sxx = 0;
    double d, a, b;
    int n, i;
    cin >> n;
    if (n < 2 || n > 50)
    {
        cout << "\nn must be between 2 and 50.\n";
        return 0;
    }
    for (i = 0; i < n; i++)
        cin >> x[i];
    for (i = 0; i < n; i++)
        cin >> y[i];
    cout << fixed << setprecision(4);
    cout << "\n"
         << setw(10) << "x"
         << setw(10) << "y" << setw(10) << "xy"
         << setw(10) << "x^2" << endl;
    for (i = 0; i < n; i++)
    {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sxx += x[i] * x[i];
        cout << setw(10) << x[i] << setw(10) << y[i]
             << setw(10) << x[i] * y[i]
             << setw(10) << x[i] * x[i] << endl;
    }
    cout << setw(10) << sx << setw(10) << sy
         << setw(10) << sxy << setw(10) << sxx
         << "  (sums)" << endl;

    d = n * sxx - sx * sx;
    if (fabs(d) < 1e-12)
    {
        cout << "\nCannot fit: all x are equal.\n";
        return 0;
    }
    b = (n * sxy - sx * sy) / d;
    a = (sy - b * sx) / n;

    cout << "\na (intercept) = " << a << endl;
    cout << "b (slope)     = " << b << endl;
    cout << "Fitted line: y = " << a
         << " + " << b << "x" << endl;
    return 0;
}
