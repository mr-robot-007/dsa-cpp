#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

//biggest no from numeric string
int main(){

    string s ="64871312864";
    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;










    return 0;


}