
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A[10][10], rowSum, colSum;
    double norm1 = 0, normInf = 0, fro = 0;
    int n, i, j;
    cin >> n;
    if (n < 1 || n > 10)
    {
        cout << "\nOrder must be 1 to 10.\n";
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    }
    cout << fixed << setprecision(4);
    cout << "\nAbsolute row sums:\n";
    for (i = 0; i < n; i++)
    {
        rowSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += fabs(A[i][j]);
            fro += A[i][j] * A[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum
             << endl;
        if (rowSum > normInf)
            normInf = rowSum;
    }

    cout << "\nAbsolute column sums:\n";
    for (j = 0; j < n; j++)
    {
        colSum = 0;
        for (i = 0; i < n; i++)
            colSum += fabs(A[i][j]);
        cout << "Column " << j + 1 << " = " << colSum
             << endl;
        if (colSum > norm1)
            norm1 = colSum;
    }
    fro = sqrt(fro);

    cout << "\n1-norm         = " << norm1 << endl;
    cout << "Infinity-norm  = " << normInf << endl;
    cout << "Frobenius norm = " << fro << endl;
    return 0;
}
