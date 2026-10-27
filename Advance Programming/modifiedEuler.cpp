#include <bits/stdc++.h>
using namespace std;
double f(double x, double y)
{
    return x + y;
}
double exact(double x)
{
    return 2 * exp(x) - x - 1;
}
int main()
{
    double x0, y0, h, xn, x, y, k, yp;
    int n, i;
    cin >> x0;
    cin >> y0;
    cin >> h;
    cin >> xn;

    if (h <= 0 || xn <= x0)
    {
        cout << "\nInvalid h or final x.\n";
        return 0;
    }
    n = (int)floor((xn - x0) / h + 0.5);
    x = x0;
    y = y0;
    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "i"
         << setw(10) << "x"
         << setw(12) << "y(Pred)"
         << setw(12) << "y(Corr)"
         << setw(12) << "y(Exact)"
         << setw(11) << "Error" << endl;
    cout << setw(4) << 0 << setw(10) << x
         << setw(12) << "-" << setw(12) << y
         << setw(12) << exact(x)
         << setw(11) << fabs(exact(x) - y) << endl;
    for (i = 1; i <= n; i++)
    {
        k = f(x, y);
        yp = y + h * k;
        y = y + h / 2 * (k + f(x + h, yp));
        x = x0 + i * h;
        cout << setw(4) << i << setw(10) << x
             << setw(12) << yp << setw(12) << y
             << setw(12) << exact(x)
             << setw(11) << fabs(exact(x) - y)
             << endl;
    }
    cout << "\ny(" << x << ") = " << y << endl;
    return 0;
}
