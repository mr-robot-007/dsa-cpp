#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int n,ans = 0,mx = -1;;
        cin >> n;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        arr[n] = -1;
        if (n == 1 || n == 0)
        {
            ans = n;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                
                if (arr[i] > mx && (arr[i] > arr[i + 1]))
                {
                    ans++;
                }
                mx = max(arr[i], mx);
            }
        }
        cout << "Case #" << j << ": " << ans << endl;
    }
    return 0;
}


