#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const int INF = 999;

void printMatrix(const vector<vector<int>> &d, int n)
{
    cout << endl
         << "All-pairs shortest distance matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (d[i][j] == INF)
            {
                cout << setw(5) << "INF";
            }
            else
            {
                cout << setw(5) << d[i][j];
            }
        }
        cout << endl;
    }
}

void floydWarshall(vector<vector<int>> &d, int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (d[i][k] != INF && d[k][j] != INF && d[i][k] + d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    printMatrix(d, n);
}

void solve()
{
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> d(n, vector<int>(n));

    cout << "Enter the cost adjacency matrix (999 where no edge exists):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> d[i][j];
        }
    }

    floydWarshall(d, n);
}

int main()
{
    solve();
    return 0;
}