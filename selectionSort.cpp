#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int j = 0;
    while (j < n)
    {
        int minimum = INT_MAX;
        int key;
        for (int i = j; i < n; i++)
        {
            minimum = min(arr[i], minimum);
            if (minimum == arr[i])
            {
                key = i;
            }
        }
        int temp = arr[j];
        arr[j] = minimum;
        arr[key] = temp;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}