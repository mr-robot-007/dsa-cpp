#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)
{
    int result = 0;
    // traverse for each bit of result/ans(assuming of int 64 bit)
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        //taversing over each element
        for (int j = 0; j < n; j++)
        {
            // checking whether that particular element has set bit at i or not
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << unique(arr, 10) << endl;

    return 0;
}