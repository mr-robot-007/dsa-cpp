#include<bits/stdc++.h>
using namespace std;

//primefactor using seive of eratosthenes only for numbers upto 100
void primefactor(int n)
{
    if (n ==1 || n==0){
        cout<<"prime factors of "<<n<<" : "<<n;
        return;
    }
    int spf[100];
    for(int i = 2;i<n;i++)
    {
        spf[i]=i;
    }
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(spf[i]==i)
        {
            for(int j = i*i;j<=n;j+=i)
            { 
                if(spf[j]=j){
                    spf[j]= i ;
                }
            }
        }
    }
    cout<<"prime factors of "<<n<<" : ";
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];

    }cout<<endl;

}
int main(){
    int n;
    cin>>n;
    
    primefactor(n);


    return 0;
}