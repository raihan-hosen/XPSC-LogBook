#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(double x)
{
    return x * x * x - x - 2;
}
int main()
{
    double x0, x1, x2, f0, f1, tol, err;
    int maxIter, i;

    cin >> x0;
    cin >> x1;
    cin >> tol;
    cin >> maxIter;
    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "Iter"
         << setw(12) << "x" << setw(12) << "f(x)"
         << setw(12) << "Error" << endl;
    for (i = 1; i <= maxIter; i++)
    {
        f0 = f(x0);
        f1 = f(x1);
        if (fabs(f1 - f0) < 1e-12)
        {
            cout << "Denominator is zero.\n";
            return 0;
        }
        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
        err = fabs(x2 - x1);
        cout << setw(4) << i << setw(12) << x2
             << setw(12) << f(x2)
             << setw(12) << err << endl;
        if (err < tol)
        {
            cout << "\nRoot = " << x2 << endl;
            cout << "Iterations = " << i << endl;
            return 0;
        }
        x0 = x1;
        x1 = x2;
    }
    cout << "\nNot converged.\n";
    return 0;
}
