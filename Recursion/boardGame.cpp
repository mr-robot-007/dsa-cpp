#include<bits/stdc++.h>
using namespace std;


int countPath(int st,int en)
{
    if(st == en)
    {
        return 1;
    }
    if(st > en){
        return 0;
    }
    int count = 0;
    for(int i=1;i<=6;i++)
    {
        count += countPath(st+i,en);
    }
    return count;
}

int main(){
    cout<<countPath(0,3);

    return 0;
}