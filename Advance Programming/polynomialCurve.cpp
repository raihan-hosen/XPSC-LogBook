#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[50], y[50], A[10][11], c[10];
    double t, factor, sum;
    int n, m, i, j, k, p;

    cin >> n;
    cin >> m;
    if (n > 50 || m < 1 || m > 8 || n <= m)
    {
        cout << "\nInvalid n or degree.\n";
        return 0;
    }
    for (i = 0; i < n; i++)
        cin >> x[i];
    for (i = 0; i < n; i++)
        cin >> y[i];

    // Build normal equations
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= m; j++)
        {
            A[i][j] = 0;
            for (k = 0; k < n; k++)
                A[i][j] += pow(x[k], i + j);
        }
        A[i][m + 1] = 0;
        for (k = 0; k < n; k++)
            A[i][m + 1] += y[k] * pow(x[k], i);
    }
    cout << fixed << setprecision(4);
    cout << "\nAugmented normal matrix:\n";
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= m + 1; j++)
            cout << setw(11) << A[i][j];
        cout << endl;
    }
    for (i = 0; i <= m; i++)
    {
        p = i;
        for (j = i + 1; j <= m; j++)
            if (fabs(A[j][i]) > fabs(A[p][i]))
                p = j;
        if (fabs(A[p][i]) < 1e-12)
        {
            cout << "\nSystem is singular.\n";
            return 0;
        }
        for (k = 0; k <= m + 1; k++)
        {
            t = A[i][k];
            A[i][k] = A[p][k];
            A[p][k] = t;
        }
        for (j = i + 1; j <= m; j++)
        {
            factor = A[j][i] / A[i][i];
            for (k = i; k <= m + 1; k++)
                A[j][k] -= factor * A[i][k];
        }
    }

    for (i = m; i >= 0; i--)
    {
        sum = A[i][m + 1];
        for (j = i + 1; j <= m; j++)
            sum -= A[i][j] * c[j];
        c[i] = sum / A[i][i];
    }

    cout << "\nCoefficients:\n";
    for (i = 0; i <= m; i++)
        cout << "a" << i << " = " << c[i] << endl;
    cout << "\ny = " << c[0];
    for (i = 1; i <= m; i++)
        cout << " + (" << c[i] << ")x^" << i;
    cout << endl;
    return 0;
}
