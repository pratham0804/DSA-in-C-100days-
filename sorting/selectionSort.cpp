#include<bits/stdc++.h>
using namespace std;
// select the minimum and swap it with first 
// get minimum element
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n ; i++){
        cin>>arr[i];
    }

    //sorting
    
    for(int i=0 ; i<=n-2 ; i++){
        int minIndex=i;
        
        for(int j=i; j<=n-1 ; j++){
            if(arr[j]<arr[minIndex]){
                 minIndex=j;
                
            }
        }
        swap(&arr[i],&arr[minIndex]);
    }


    // printing array 
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}