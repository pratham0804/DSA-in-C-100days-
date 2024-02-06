#include<bits/stdc++.h>
using namespace std;
// take a array and store in into hashmap
// array can allocate maximum 10 to the power 7 spaces , to resolve the issue  we use maping functio 
// map only stores the available numbers and their count , rather than every number till maximum.
int main(){
    int arr[]={1,2,3,4,5,7,4,2,3,3,2,4,3,1,2,6};
    map<int,int> mpp;

    for(int  i=0 ; i<16 ;i++){
        mpp[arr[i]]++;
    }

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        cout<<mpp[n]<<endl;



    }


    return 0;
}
// the data is stored in sorted order 