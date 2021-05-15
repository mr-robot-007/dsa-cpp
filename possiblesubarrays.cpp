#include<bits/stdc++.h>
using namespace std;
//O(N^3)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i =0;i<n;i++)
    {
        for(int j = i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}


//O(n^2)
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//         cin>>arr[i];
//     int count = 0,st =count,en = count;
//     for(int i =0;i<(n*(n+1))/2;i++)
//     {
//         if(en ==n){
//             count++;
//             st =count;
//             en = count;
//         }
//         for(int i =st;i<=en;i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//         en++;
//     }
// }