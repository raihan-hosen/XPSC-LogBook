#include <iostream>
#include <vector>

using namespace std;

const int INF = 999;

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

int findMinVertex(const vector<int> &dist, const vector<bool> &settled, int n)
{
    int minVal = INF;
    int u = -1;
    for (int i = 0; i < n; i++)
    {
        if (!settled[i] && dist[i] < minVal)
        {
            minVal = dist[i];
            u = i;
        }
    }
    return u;
}

void printResults(const vector<int> &dist, const vector<int> &parent, int n)
{
    cout << endl
         << "Vertex\tDistance\tPath" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << "\t";
        if (dist[i] == INF)
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

void dijkstra(const vector<vector<int>> &cost, int n, int src)
{
    vector<int> dist(n, INF);
    vector<int> parent(n, -1);
    vector<bool> settled(n, false);

    dist[src] = 0;

    for (int count = 0; count < n; count++)
    {
        int u = findMinVertex(dist, settled, n);
        if (u == -1)
        {
            break;
        }
        settled[u] = true;

        for (int v = 0; v < n; v++)
        {
            if (!settled[v] && cost[u][v] != INF && dist[u] + cost[u][v] < dist[v])
            {
                dist[v] = dist[u] + cost[u][v];
                parent[v] = u;
            }
        }
    }

    printResults(dist, parent, n);
}

void solve()
{
    int n, src;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "Enter the cost adjacency matrix (non-negative weights only):" << endl;
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

    dijkstra(cost, n, src);
}

int main()
{
    solve();
    return 0;
}