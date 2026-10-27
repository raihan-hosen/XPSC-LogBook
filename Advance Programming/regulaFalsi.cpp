#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x * x * x - x - 2;
}

int main()
{
    double a, b, c, cOld, fa, fb, fc, tol, err;
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
    cOld = a;
    for (i = 1; i <= maxIter; i++)
    {
        fa = f(a);
        fb = f(b);
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);
        err = fabs(c - cOld);
        cout << setw(4) << i << setw(10) << a
             << setw(10) << b << setw(10) << c
             << setw(11) << fc
             << setw(10) << err << endl;
        if (fabs(fc) < tol || err < tol)
        {
            cout << "\nRoot = " << c << endl;
            cout << "Iterations = " << i << endl;
            return 0;
        }
        if (fa * fc < 0)
            b = c;
        else
            a = c;
        cOld = c;
    }
    cout << "\nNot converged.\n";
    return 0;
}
