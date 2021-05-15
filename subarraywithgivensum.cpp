#include <bits/stdc++.h>
using namespace std;

int main()
{
    
        int n;
        cin >> n;
        int arr[n];
        int sum;
        cin >> sum;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int  currsum = 0,st=0,en=0;
        for (int i = 0; i < n ; i++)
        {
            if(currsum ==sum)
            {
                cout<<st <<" "<<en<<endl;
                return 0;
            }
            else if(currsum<sum){
                currsum+=arr[i];
                en=i;
            }
            else if(currsum>sum){
                currsum -= arr[st];
                st++;
            }

        }
    cout<<st <<" "<<en<<endl;
    // cout << -1 << endl;
    return 0;
}
