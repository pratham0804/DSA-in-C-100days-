#include<bits/stdc++.h>
using namespace std;
// If you declare a array globally , you can allocate array of max 10 to the power 7 size
// but in main the max size allowed is 10 to the power 6


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    // precompute 
    int hash[13]={0};
    for(int i=0 ; i<13 ; i++){
        hash[a[i]]++;
    }
    int q;
    cin>>q;

    while(q-->0){
        int number;
        cin>>number;

        //
        cout<<hash[number]<<endl;
    }
    return 0;
}