#include <iostream>
#include <vector>

using namespace std;

using Matrix = vector<vector<int>>;

Matrix add(const Matrix &A, const Matrix &B)
{
    int n = static_cast<int>(A.size());
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

Matrix subtract(const Matrix &A, const Matrix &B)
{
    int n = static_cast<int>(A.size());
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

Matrix strassen(const Matrix &A, const Matrix &B)
{
    int n = static_cast<int>(A.size());
    if (n == 1)
    {
        return {{A[0][0] * B[0][0]}};
    }

    int h = n / 2;

    Matrix A11(h, vector<int>(h)), A12(h, vector<int>(h)), A21(h, vector<int>(h)), A22(h, vector<int>(h));
    Matrix B11(h, vector<int>(h)), B12(h, vector<int>(h)), B21(h, vector<int>(h)), B22(h, vector<int>(h));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + h];
            A21[i][j] = A[i + h][j];
            A22[i][j] = A[i + h][j + h];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + h];
            B21[i][j] = B[i + h][j];
            B22[i][j] = B[i + h][j + h];
        }
    }

    Matrix M1 = strassen(add(A11, A22), add(B11, B22));
    Matrix M2 = strassen(add(A21, A22), B11);
    Matrix M3 = strassen(A11, subtract(B12, B22));
    Matrix M4 = strassen(A22, subtract(B21, B11));
    Matrix M5 = strassen(add(A11, A12), B22);
    Matrix M6 = strassen(subtract(A21, A11), add(B11, B12));
    Matrix M7 = strassen(subtract(A12, A22), add(B21, B22));

    Matrix C11 = add(subtract(add(M1, M4), M5), M7);
    Matrix C12 = add(M3, M5);
    Matrix C21 = add(M2, M4);
    Matrix C22 = add(add(subtract(M1, M2), M3), M6);

    Matrix C(n, vector<int>(n));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            C[i][j] = C11[i][j];
            C[i][j + h] = C12[i][j];
            C[i + h][j] = C21[i][j];
            C[i + h][j + h] = C22[i][j];
        }
    }

    return C;
}

void readMatrix(Matrix &mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(const Matrix &mat, int n)
{
    cout << "Product matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int n;

    cout << "Enter size of matrices (n x n): ";
    cin >> n;

    int size = 1;
    while (size < n)
    {
        size *= 2;
    }

    Matrix A(size, vector<int>(size, 0));
    Matrix B(size, vector<int>(size, 0));

    cout << "Enter elements of matrix A:" << endl;
    readMatrix(A, n);

    cout << "Enter elements of matrix B:" << endl;
    readMatrix(B, n);

    Matrix C = strassen(A, B);
    printMatrix(C, n);
}

int main()
{
    solve();
    return 0;
}