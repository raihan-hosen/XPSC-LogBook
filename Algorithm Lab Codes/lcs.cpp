#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lcsLength(const string &a, const string &b, vector<vector<int>> &dp)
{
    int m = static_cast<int>(a.length());
    int n = static_cast<int>(b.length());

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

string buildLCS(const string &a, const string &b, const vector<vector<int>> &dp)
{
    int m = static_cast<int>(a.length());
    int n = static_cast<int>(b.length());
    int len = dp[m][n];

    string lcs(len, ' ');
    int i = m;
    int j = n;
    int k = len - 1;

    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            lcs[k--] = a[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] >= dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    return lcs;
}

void printResults(int len, const string &lcs)
{
    cout << endl
         << "Length of LCS: " << len << endl;
    cout << "LCS: " << lcs << endl;
}

void solve()
{
    string a, b;

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    int m = static_cast<int>(a.length());
    int n = static_cast<int>(b.length());

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    int len = lcsLength(a, b, dp);
    string lcs = buildLCS(a, b, dp);

    printResults(len, lcs);
}

int main()
{
    solve();
    return 0;
}