#include <iostream>
#include <vector>

using namespace std;

const int INF = 999;

bool findMinEdge(const vector<vector<int>> &cost, const vector<bool> &selected, int n, int &u, int &v, int &minWeight)
{
    minWeight = INF;
    u = -1;
    v = -1;

    for (int i = 0; i < n; i++)
    {
        if (selected[i])
        {
            for (int j = 0; j < n; j++)
            {
                if (!selected[j] && cost[i][j] < minWeight)
                {
                    minWeight = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
    }

    return u != -1;
}

void prims(const vector<vector<int>> &cost, int n)
{
    vector<bool> selected(n, false);
    int edges = 0;
    int minCost = 0;

    selected[0] = true;
    cout << "Edge\tWeight" << endl;

    while (edges < n - 1)
    {
        int u, v, minWeight;
        if (!findMinEdge(cost, selected, n, u, v, minWeight))
        {
            cout << "Graph is disconnected!" << endl;
            return;
        }

        cout << u << " - " << v << "\t" << minWeight << endl;
        selected[v] = true;
        minCost += minWeight;
        edges++;
    }

    cout << "Minimum Cost = " << minCost << endl;
}

void solve()
{
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "Enter the cost adjacency matrix:" << endl;
    cout << "Enter 999 for no edge." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }

    prims(cost, n);
}

int main()
{
    solve();
    return 0;
}