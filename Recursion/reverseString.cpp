#include <bits/stdc++.h>
using namespace std;

void reverseString(string str)
{
    if (str.length() == 0)
        return;
    string subString = str.substr(1);
    reverseString(subString);
    cout << str[0];
}

int main()
{
    string s = "binod";
    reverseString(s);
    return 0;
}