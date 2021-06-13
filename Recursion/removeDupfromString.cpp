#include <iostream>
using namespace std;

string removeAllDuplicates(string str)
{
    if(str.length() == 1 || str.length() ==0)
    {
        return "";
    }
    
    char ch = str[0];
    string ans = removeAllDuplicates(str.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main()
{
    string s = "aaabbbeeecdddd";
    cout<<removeAllDuplicates(s);

    return 0;
}