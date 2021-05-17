#include <bits/stdc++.h>
using namespace std;

//15.2 Inclusion-exclusion principle
// gcd using subtraction
void gcd(int a, int b)
{
    int ans = 1;
    int rem = max(a, b) - min(a, b);
    while (rem != 0)
    {
        a = max(b, rem);
        b = min(b, rem);
        rem = a - b;
    }
    cout << "gcd : " << a << endl;
}

// gcd using division
void gcd2(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    cout << "gcd : " << a << endl;
}

int main()
{

    gcd(42, 24);
    gcd2(18, 24);

    return 0;
}