#include <bits/stdc++.h>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0) //if 0 items are left or no weigth can be put in knapsack
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapsack(value, wt, n - 1, W);
    }
    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1]
    , knapsack(value, wt, n - 1, W));

    // knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1]  when item is included
    // knapsack(value, wt, n - 1, W) when item is not included
}

int main()
{

    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;
    cout << knapsack(value, wt, 3, W) << endl;

    return 0;
}