#include<bits/stdc++.h>
using namespace std;


//myLogic
bool isSorted(int arr[],int n)
{
    if(n == 1)
    {
        return true;
    }
    return (arr[n-1]>arr[n-2]) && isSorted(arr,n-1);

}

//video login
bool sorted(int arr[],int n)
{
    if(n==1){
        return true;
    }
    return (arr[0]<arr[1]) && sorted(arr+1,n-1);

}


int main(){

int arr[]={1,2,3,4,5};
// int arr[]={1,2,3,5,4};
cout<<isSorted(arr,5) <<endl;
cout<<sorted(arr,5) <<endl;;


    return 0;
}