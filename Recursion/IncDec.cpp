#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}


void inc(int n )
{
    if( n ==0)
    {
        return;
    }
    inc(n-1);
    cout<< n<<" ";
}

//my logic
// void inc(int i,int n )
// {
//     if(i > n)
//     {
//         return;
//     }
//     cout<< i << " ";
//     inc(i+1,n);
// }


int main(){
    int n;
    cin >> n;
    dec(n);
    cout<<endl;
    inc(n);


    return 0;
}