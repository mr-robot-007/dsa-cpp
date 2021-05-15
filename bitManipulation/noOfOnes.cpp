#include<bits/stdc++.h>
using namespace std;

int countnoOfones(int n)
{ 
    int count =0;
    while(n){
        n=(n & (n-1));
        count++;
    }
    return count;
}


int main(){

    cout<<countnoOfones(19)<<endl;
    cout<<countnoOfones(6)<<endl;
    cout<<countnoOfones(8)<<endl;
    cout<<countnoOfones(165)<<endl;

    return 0;
}