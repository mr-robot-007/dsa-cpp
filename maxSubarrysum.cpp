#include<bits/stdc++.h>
using namespace std;


//kadane's algorithm

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    int currsum = 0;
    int maxSum =INT_MIN;
    for(int i = 1;i<=n;i++)
    {
        currsum+=arr[i-1];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
    }
    

    cout<<maxSum<<endl;


    return 0;
}

// int main()
// {

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//         cin>>arr[i];
//     int currsum[n+1];
//     currsum[0] = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         currsum[i]= currsum[i-1]+arr[i-1];
//     }
//     int maxSum =INT_MIN;
//     for(int i =1;i<=n;i++)
//     {
//         int sum = 0;
//         for(int j=0;j<i;j++)
//         {
//             sum= currsum[i]-currsum[j];
//             maxSum = max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;


//     return 0;
// }


// int main(){
//     int n,ans=INT_MIN;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//         cin>>arr[i];
//     int count = 0,st =count,en = count;
//     for(int i =0;i<(n*(n+1))/2;i++)
//     {
//         int sum = 0;
//         if(en ==n){
//             count++;
//             st =count;
//             en = count;
//         }
//         for(int i =st;i<=en;i++){
//             sum+=arr[i];
//         }
//         en++;
//         ans = max(ans,sum);
//     }
//     cout<<ans<<endl;
//     return 0;
// }