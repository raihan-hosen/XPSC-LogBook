#include <iostream>
#include <vector>

using namespace std;

const int INF = 999;

int findRoot(const vector<int> &parent, int i)
{
    while (parent[i] != i)
    {
        i = parent[i];
    }
    return i;
}

void unionSets(vector<int> &parent, int u, int v)
{
    int rootU = findRoot(parent, u);
    int rootV = findRoot(parent, v);
    parent[rootU] = rootV;
}

void kruskal(vector<vector<int>> &cost, int V)
{
    vector<int> parent(V);
    int minCost = 0;
    int count = 0;

    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }

    while (count < V - 1)
    {
        int minWeight = INF;
        int u = -1;
        int v = -1;

        for (int i = 0; i < V; i++)
        {
            for (int j = i + 1; j < V; j++)
            {
                if (cost[i][j] < minWeight)
                {
                    if (findRoot(parent, i) != findRoot(parent, j))
                    {
                        minWeight = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (u == -1)
        {
            cout << "Graph is disconnected!" << endl;
            return;
        }

        cout << u << " - " << v << " : " << minWeight << endl;
        unionSets(parent, u, v);
        minCost += minWeight;
        count++;
        cost[u][v] = INF;
    }

    cout << "Minimum Cost = " << minCost << endl;
}

void solve()
{
    int V;

    cout << "Enter number of vertices: ";
    cin >> V;

    vector<vector<int>> cost(V, vector<int>(V));

    cout << "Enter the cost adjacency matrix:" << endl;
    cout << "Enter 999 where no edge exists." << endl;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> cost[i][j];
        }
    }

    kruskal(cost, V);
}

int main()
{
    solve();
    return 0;
}