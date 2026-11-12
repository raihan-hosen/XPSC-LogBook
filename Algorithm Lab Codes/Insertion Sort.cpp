#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = static_cast<int>(arr.size());
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr);
    printArray(arr);
}

int main()
{
    solve();
    return 0;
}