#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int k){
    for(int i =0;i<n-1;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k){
                printf("%d %d \n",i,j);
                return true;
            }
        }
    }
    return false;
}
// O(N/2) -- for sorted array only
bool pairsumOptimised(int arr[],int n,int k)
{
    int low = 0,high= n-1;
    while(low<high)
    {
        int currsum = arr[low]+arr[high];
        if(currsum == k){
            printf("%d %d \n",low,high);
            return true;
        }
        else if(currsum<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}
int main(){

    int arr[]={2,4,7,11,14,16,20,21};
    int k =31;
    cout<<pairsum( arr,8,k)<<"\n"<<endl;
    cout<<pairsumOptimised( arr,8,k)<<endl;

    

    return  0;
}