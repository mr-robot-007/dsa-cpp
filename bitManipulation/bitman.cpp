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

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBit(int n,int pos,int value)
{
    int mask = ~(1<<pos);
    n = (n & mask);
    return (n | value<<pos);
}
int main()
{
    cout << "getBit " << getBit(5, 2) << endl;
    cout << "setBit " << setBit(5, 1) << endl;
    cout << "clearBit " << clearBit(5, 2) << endl;
    cout << "updateBit " << updateBit(5,3,1) <<endl;
    return 0;
}