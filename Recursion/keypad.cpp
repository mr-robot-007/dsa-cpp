#include <bits/stdc++.h>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> ans_array;
void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        // cout<<ans<<endl;
        ans_array.push_back(ans);
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    string code = keypadArr[ch - '0'];
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
    string s;
    cin >> s;
    cout << "[";
    keypad(s, "");
    for (int i = 0; i < ans_array.size(); i++)
    {
        cout << ans_array[i];
        if (i != ans_array.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}