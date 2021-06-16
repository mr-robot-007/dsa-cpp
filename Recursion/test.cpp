#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void gss(string s){
    // write your code here
    if(s.length()==0){
        cout<<""<<endl;
        return;
    }
    char ch = s[0];
    string res =  s.substr(1);
    gss(res);
    cout<<ch +res<<endl;
    cout<<res<<endl;
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;

    cout << '[';
    gss(s);
    cout << ']';
}
