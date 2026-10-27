#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a[10][11], x[10], xn[10];
    double tol, sum, err, diff;
    int n, maxIter, i, j, iter;
    bool dominant = true;
    cin >> n;
    if (n < 1 || n > 10)
    {
        cout << "\nn must be 1 to 10.\n";
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
            cin >> a[i][j];
    }
    cin >> tol;
    cin >> maxIter;
    for (i = 0; i < n; i++)
    {
        if (fabs(a[i][i]) < 1e-12)
        {
            cout << "\nZero diagonal element.\n";
            return 0;
        }
        sum = 0;
        for (j = 0; j < n; j++)
            if (j != i)
                sum += fabs(a[i][j]);
        if (fabs(a[i][i]) <= sum)
            dominant = false;
        x[i] = 0;
    }
    if (dominant)
        cout << "\nMatrix is diagonally dominant.\n";
    else
        cout << "\nWarning: not diagonally "
             << "dominant.\n";
    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "Iter";
    for (i = 0; i < n; i++)
        cout << setw(9) << "x" << i + 1;
    cout << setw(11) << "Error" << endl;
    for (iter = 1; iter <= maxIter; iter++)
    {
        err = 0;
        for (i = 0; i < n; i++)
        {
            sum = a[i][n];
            for (j = 0; j < n; j++)
                if (j != i)
                    sum -= a[i][j] * x[j];
            xn[i] = sum / a[i][i];
            diff = fabs(xn[i] - x[i]);
            if (diff > err)
                err = diff;
        }
        for (i = 0; i < n; i++)
            x[i] = xn[i];

        cout << setw(4) << iter;
        for (i = 0; i < n; i++)
            cout << setw(10) << x[i];
        cout << setw(11) << err << endl;

        if (err < tol)
        {
            cout << "\nSolution after " << iter
                 << " iterations:\n";
            for (i = 0; i < n; i++)
                cout << "x" << i + 1 << " = " << x[i]
                     << endl;
            return 0;
        }
    }
    cout << "\nNot converged.\n";
    return 0;
}
