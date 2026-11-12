#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int> &arr, int key)
{
    for (int i = 0; i < static_cast<int>(arr.size()); i++)
    {
        if (arr[i] == key)
        {
            return i;
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

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, key);
    printResult(result);
}

int main()
{
    solve();
    return 0;
}