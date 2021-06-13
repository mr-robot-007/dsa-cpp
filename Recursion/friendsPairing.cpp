#include<bits/stdc++.h>
using namespace std;

int pairFriends(int n)
{
    if(n==0 || n==1 || n==2){
        return n;
    }
    return pairFriends(n-1)     +    pairFriends(n-2)*(n-1);
    // pairFriends(n-1) -->  f(we left 1 person single   we have n-1 person left to pair or keep them single 
    //  pairFriends(n-2)*(n-1) -->  if we pair 1 person with everyone so friends left would be n-2 and he can be paired with n-1 persons
}


int main(){

    cout<<pairFriends(4)<<endl; 
    //ans  = 10




    return 0;
}
