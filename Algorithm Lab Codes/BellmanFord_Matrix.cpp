#include <iostream>
#include <vector>

using namespace std;

const int INF = 999;
const int BIG = 1000000;

void printPath(const vector<int> &parent, int v)
{
    if (parent[v] == -1)
    {
        cout << v;
        return;
    }
    printPath(parent, parent[v]);
    cout << " -> " << v;
}

bool hasNegativeCycle(const vector<vector<int>> &cost, const vector<int> &dist, int n)
{
    for (int u = 0; u < n; u++)
    {
        for (int v = 0; v < n; v++)
        {
            if (u != v && cost[u][v] != INF && dist[u] != BIG &&
                dist[u] + cost[u][v] < dist[v])
            {
                return true;
            }
        }
    }
    return false;
}

void printResults(const vector<int> &dist, const vector<int> &parent, int n)
{
    cout << endl
         << "Vertex\tDistance\tPath" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << "\t";
        if (dist[i] == BIG)
        {
            cout << "INF\t\tunreachable" << endl;
        }
        else
        {
            cout << dist[i] << "\t\t";
            printPath(parent, i);
            cout << endl;
        }
    }
}

void bellmanFord(const vector<vector<int>> &cost, int n, int src)
{
    vector<int> dist(n, BIG);
    vector<int> parent(n, -1);
    dist[src] = 0;

    for (int pass = 1; pass <= n - 1; pass++)
    {
        bool changed = false;
        for (int u = 0; u < n; u++)
        {
            for (int v = 0; v < n; v++)
            {
                if (u != v && cost[u][v] != INF && dist[u] != BIG &&
                    dist[u] + cost[u][v] < dist[v])
                {
                    dist[v] = dist[u] + cost[u][v];
                    parent[v] = u;
                    changed = true;
                }
            }
        }
        if (!changed)
        {
            break;
        }
    }

    if (hasNegativeCycle(cost, dist, n))
    {
        cout << endl
             << "Graph contains a negative cycle reachable from the source!" << endl;
        return;
    }

    printResults(dist, parent, n);
}

void solve()
{
    int n, src;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "Enter the cost adjacency matrix (negative weights allowed):" << endl;
    cout << "Enter 999 where no edge exists." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }

    cout << "Enter source vertex (0 to " << n - 1 << "): ";
    cin >> src;

    bellmanFord(cost, n, src);
}

int main()
{
    solve();
    return 0;
}