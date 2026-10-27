#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[10], d[10][10];
    double xp, term, result, den;
    int n, i, j;
    cin >> n;
    if (n < 2 || n > 10)
    {
        cout << "\nn must be between 2 and 10.\n";
        return 0;
    }
    for (i = 0; i < n; i++)
        cin >> x[i];
    for (i = 0; i < n; i++)
        cin >> d[i][0];
    cin >> xp;

    // Divided difference table
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            den = x[i + j] - x[i];
            if (fabs(den) < 1e-12)
            {
                cout << "\nRepeated x values.\n";
                return 0;
            }
            d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / den;
        }
    }
    cout << fixed << setprecision(4);
    cout << "\nDivided difference table:\n";
    cout << setw(8) << "x" << setw(9) << "y";
    for (j = 1; j < n; j++)
        cout << setw(8) << "DD" << j;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(8) << x[i];
        for (j = 0; j < n - i; j++)
            cout << setw(9) << d[i][j];
        cout << endl;
    }

    // Newton's divided difference polynomial
    result = d[0][0];
    term = 1;
    for (j = 1; j < n; j++)
    {
        term *= (xp - x[j - 1]);
        result += d[0][j] * term;
    }
    cout << "\nf(" << xp << ") = "
         << result << endl;
    return 0;
}
