#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    bool arr[n + 1];
    for (int i = 0; i <n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 1)
        {
            int j = i * i;
            while (j <n)
            {
                if (arr[j] == 1)
                {
                    arr[j] = 0;
                }
                j += i;
            }
        }
    }

    for (int i = 2; i <n; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n+1);

    return 0;
}