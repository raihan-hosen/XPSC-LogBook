
#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x * x * x - x - 2;
}

double df(double x)
{
    return 3 * x * x - 1;
}

int main()
{
    double x0, x1, tol, err;
    int maxIter, i;

    cin >> x0;
    cin >> tol;
    cin >> maxIter;
    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "Iter"
         << setw(12) << "x" << setw(12) << "f(x)"
         << setw(12) << "Error" << endl;
    for (i = 1; i <= maxIter; i++)
    {
        if (fabs(df(x0)) < 1e-12)
        {
            cout << "Derivative is zero.\n";
            return 0;
        }
        x1 = x0 - f(x0) / df(x0);
        err = fabs(x1 - x0);
        cout << setw(4) << i << setw(12) << x1
             << setw(12) << f(x1)
             << setw(12) << err << endl;
        if (err < tol)
        {
            cout << "\nRoot = " << x1 << endl;
            cout << "Iterations = " << i << endl;
            return 0;
        }
        x0 = x1;
    }
    cout << "\nNot converged.\n";
    return 0;
}
