#include<bits/stdc++.h>
using namespace std;


int NraisedPowerP(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return  n * NraisedPowerP(n,p-1);

}


int  main(){
    int n,p;
    cin>>n>>p;
    cout<<NraisedPowerP(n,p)<<endl;;

    return 0;
}