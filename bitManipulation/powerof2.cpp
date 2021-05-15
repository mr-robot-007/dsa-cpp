#include<bits/stdc++.h>
using namespace std;

int powerof2(int n)
{
    return (n && !(n & (n-1)));
}

int main(){
    cout<<powerof2(7)<<endl;
    cout<<powerof2(8)<<endl;
    cout<<powerof2(6)<<endl;
    cout<<powerof2(14)<<endl;
    cout<<powerof2(32)<<endl;


    return 0;
}