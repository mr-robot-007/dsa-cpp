#include<bits/stdc++.h>
using namespace std;


int firstOccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstOccurence(arr,n,i+1,key);
}

//mylogic
int lastOccurence(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[n-1]==key)
    {
        return n-1;
    }
    return lastOccurence(arr,n-1,key);
}

int main(){

    int arr[]={4,2,3,2,2,1,5,6};
    cout<<firstOccurence(arr,8,0,2)<<endl;
    cout<<lastOccurence(arr,8,2)<<endl;


    return 0;
}