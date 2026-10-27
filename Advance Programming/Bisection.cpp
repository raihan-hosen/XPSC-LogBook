
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
    double a, b, c, tol, err;
    int maxIter, i;

    cin >> a;
    cin >> b;
    cin >> tol;
    cin >> maxIter;

    if (f(a) * f(b) >= 0)
    {
        cout << "\nf(a) and f(b) must have ";
        cout << "opposite signs.\n";
        return 0;
    }
    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "Iter"
         << setw(10) << "a" << setw(10) << "b"
         << setw(10) << "c" << setw(11) << "f(c)"
         << setw(10) << "Error" << endl;
    for (i = 1; i <= maxIter; i++)
    {
        c = (a + b) / 2;
        err = (b - a) / 2;
        cout << setw(4) << i << setw(10) << a
             << setw(10) << b << setw(10) << c
             << setw(11) << f(c)
             << setw(10) << err << endl;
        if (f(c) == 0 || err < tol)
        {
            cout << "\nRoot = " << c << endl;
            cout << "Iterations = " << i << endl;
            return 0;
        }
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
    cout << "\nNot converged.\n";
    return 0;
}
