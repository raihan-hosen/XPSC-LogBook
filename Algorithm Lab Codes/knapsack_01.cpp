#include <iostream>
#include <vector>

using namespace std;

int getMax(int a, int b)
{
    return a > b ? a : b;
}

void printSelectedItems(const vector<vector<int>> &dp, const vector<int> &wt, int n, int W)
{
    cout << "Items selected: ";
    int w = W;
    for (int i = n; i > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            cout << i << " ";
            w = w - wt[i];
        }
    }
    cout << endl;
}

void knapsack(const vector<int> &wt, const vector<int> &profit, int n, int W)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (wt[i] <= w)
            {
                dp[i][w] = getMax(profit[i] + dp[i - 1][w - wt[i]], dp[i - 1][w]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << endl
         << "Maximum value: " << dp[n][W] << endl;
    printSelectedItems(dp, wt, n, W);
}

void solve()
{
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> wt(n + 1), profit(n + 1);

    cout << "Enter weight and value of each item:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> profit[i];
    }

    cout << "Enter knapsack capacity (max 1000): ";
    cin >> W;

    knapsack(wt, profit, n, W);
}

int main()
{
    solve();
    return 0;
}