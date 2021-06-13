#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if(n==0)
        return; //base case
    
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src); 
}

int main(){

    towerOfHanoi(3,'A','B','C');
    return 0;
}