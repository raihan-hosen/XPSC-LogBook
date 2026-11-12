#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void sortIndices(vector<int> &idx, const vector<double> &ratio)
{
    int n = static_cast<int>(idx.size());
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ratio[idx[j]] < ratio[idx[j + 1]])
            {
                swap(idx[j], idx[j + 1]);
            }
        }
    }
}

void fractionalKnapsack(const vector<double> &wt, const vector<double> &val, const vector<int> &idx, double W)
{
    double total = 0.0;
    double remaining = W;
    int n = static_cast<int>(wt.size());

    cout << fixed << setprecision(2);
    cout << endl
         << "Item\tFraction taken" << endl;

    for (int i = 0; i < n && remaining > 0; i++)
    {
        int k = idx[i];
        if (wt[k] <= remaining)
        {
            cout << k + 1 << "\t" << 1.00 << endl;
            total += val[k];
            remaining -= wt[k];
        }
        else
        {
            double f = remaining / wt[k];
            cout << k + 1 << "\t" << f << endl;
            total += val[k] * f;
            remaining = 0;
        }
    }

    cout << endl
         << "Maximum value: " << total << endl;
}

void solve()
{
    int n;
    double W;

    cout << "Enter number of items: ";
    cin >> n;

    vector<double> wt(n), val(n), ratio(n);
    vector<int> idx(n);

    cout << "Enter weight and value of each item:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
        ratio[i] = val[i] / wt[i];
        idx[i] = i;
    }

    cout << "Enter knapsack capacity: ";
    cin >> W;

    sortIndices(idx, ratio);
    fractionalKnapsack(wt, val, idx, W);
}

int main()
{
    solve();
    return 0;
}