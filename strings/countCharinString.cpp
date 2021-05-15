#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "fihgiwgiwwpegwogpewjgw";
    int freq[26];
    
    for(int i =0;i<26;i++){
        freq[i] = 0;
    }

    for(int i =0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int maxF = 0;
    char c;
    for(int i =0;i<26;i++){
        if(freq[i]>maxF){
        maxF= freq[i];
            c= i+'a';
        }
    };
    cout<<c<<" "<<maxF<<endl;
    









    return 0;


}