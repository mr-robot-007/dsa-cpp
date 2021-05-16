#include <bits/stdc++.h>
using namespace std;


int getBit(int n,int pos){
    return (n & (1<< pos)!=0);
}
void unique(int arr[], int n)
{
    int xorsum=0;
    for(int i =0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int pos = -1;
    int  setbit = 0;
    while(setbit !=1)
    {
        setbit = xorsum ^ 1;
        pos++;
        xorsum = xorsum >>1;
    }
    //xorsum will become 0 at this point
    int newxor = 0;
    for(int i =0;i<n;i++)
    {
        if(getBit(arr[i],pos)){
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor <<endl;
    cout<< (newxor ^ tempxor)<<endl;
    return ;
}


int main()
{
    int arr[]={1,2,3,4,5,3,2,1};
    unique(arr,8);
    return 0;
}