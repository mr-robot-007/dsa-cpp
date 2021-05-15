#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int st = 0, en = n - 1;

    while (st <= en)
    {
        int mid = (st + en) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            en = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;
    return 0;
}