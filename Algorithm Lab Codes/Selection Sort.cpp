#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinIndex(const vector<int> &arr, int start)
{
    int minIndex = start;
    for (int j = start + 1; j < static_cast<int>(arr.size()); j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }
    return minIndex;
}

void selectionSort(vector<int> &arr)
{
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = findMinIndex(arr, i);
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(const vector<int> &arr)
{
    cout << "Sorted array:" << endl;
    for (int i = 0; i < static_cast<int>(arr.size()); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr);
    printArray(arr);
}

int main()
{
    solve();
    return 0;
}