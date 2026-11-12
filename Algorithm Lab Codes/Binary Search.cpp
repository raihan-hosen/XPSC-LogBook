#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &arr, int key)
{
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

void printResult(int result)
{
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}

void solve()
{
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, key);
    printResult(result);
}

int main()
{
    solve();
    return 0;
}