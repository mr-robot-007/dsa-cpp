#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int diff = arr[1] - arr[0], count = 1, maxlen = 1;
        for (int i = 2; i < n; i++)
        {
            if (arr[i] - arr[i - 1] == diff)
            {
                count++;
            }
            else
            {
                diff = arr[i] - arr[i - 1];
                count = 1;
            }
            maxlen = max(maxlen, count);
        }
        cout << "Case #" << j << ": " << maxlen + 1 << endl;
    }
    return 0;
}