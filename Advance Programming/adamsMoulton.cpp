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
    double x0, y0, h, xn;
    double x[200], y[200], fv[200], yp[200];
    double k1, k2, k3, k4, fp;
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
    if (n < 4 || n > 190)
    {
        cout << "\nNeed 4 to 190 steps.\n";
        return 0;
    }
    for (i = 0; i <= n; i++)
        x[i] = x0 + i * h;
    y[0] = y0;
    // Starting values y1, y2, y3 by RK4
    for (i = 0; i < 3; i++)
    {
        k1 = f(x[i], y[i]);
        k2 = f(x[i] + h / 2, y[i] + h / 2 * k1);
        k3 = f(x[i] + h / 2, y[i] + h / 2 * k2);
        k4 = f(x[i] + h, y[i] + h * k3);
        y[i + 1] = y[i] + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
    }
    for (i = 0; i < 3; i++)
        fv[i] = f(x[i], y[i]);

    // Predictor (AB4) and corrector (AM4)
    for (i = 3; i < n; i++)
    {
        fv[i] = f(x[i], y[i]);
        yp[i + 1] = y[i] + h / 24 * (55 * fv[i] - 59 * fv[i - 1] + 37 * fv[i - 2] - 9 * fv[i - 3]);
        fp = f(x[i + 1], yp[i + 1]);
        y[i + 1] = y[i] + h / 24 * (9 * fp + 19 * fv[i] - 5 * fv[i - 1] + fv[i - 2]);
    }

    cout << fixed << setprecision(6);
    cout << "\n"
         << setw(4) << "i"
         << setw(10) << "x"
         << setw(12) << "y(Pred)"
         << setw(12) << "y(Corr)"
         << setw(12) << "y(Exact)"
         << setw(11) << "Error" << endl;
    for (i = 0; i <= n; i++)
    {
        cout << setw(4) << i << setw(10) << x[i];
        if (i <= 3)
            cout << setw(12) << "-";
        else
            cout << setw(12) << yp[i];
        cout << setw(12) << y[i]
             << setw(12) << exact(x[i])
             << setw(11) << fabs(exact(x[i]) - y[i])
             << endl;
    }
    cout << "\ny(" << x[n] << ") = "
         << y[n] << endl;
    return 0;
}
