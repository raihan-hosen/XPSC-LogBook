#include <iostream>
#include <vector>

using namespace std;

void readMatrix(vector<vector<int>> &mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>> &A, const vector<vector<int>> &B, int r1, int c1, int c2)
{
    vector<vector<int>> C(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void printMatrix(const vector<vector<int>> &mat, int r, int c)
{
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of matrix B: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return;
    }

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));

    cout << "Enter elements of matrix A:" << endl;
    readMatrix(A, r1, c1);

    cout << "Enter elements of matrix B:" << endl;
    readMatrix(B, r2, c2);

    vector<vector<int>> C = multiplyMatrices(A, B, r1, c1, c2);
    printMatrix(C, r1, c2);
}

int main()
{
    solve();
    return 0;
}