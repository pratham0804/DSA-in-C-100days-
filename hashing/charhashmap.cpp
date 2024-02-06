#include<bits/stdc++.h>
using namespace std;
// character hash map
// hash map do not  allocate memory for allthe 26 characters , instead only stores data of available character
int main(){
    string str ="Prathameshasjdfdsjflds jlkskdfjlksajk";
    map<char,int> mpp;
    for(int i=0 ; i<str.size();i++){
        mpp[str[i]]++;
    }    


    int t;
    cin>> t;
    while(t--){
        char ch ;
        cin>>ch;

        cout<<mpp[ch];
    }
    return 0;
}