#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }
    for (int j = 0; j < N; j++)
    {
        if (check[j] == 0)
        {
            cout << j << endl;
            return 0;
        }
    }

    return -1;
}