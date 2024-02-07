#include<bits/stdc++.h>
using namespace std;
// push the larger elements in the end , using adjacent swaps 

// if array do not swap in first iteration , that means it is sorted , loop will break.
// worst and average in O(n^2) , but best case is O(n).
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int a[] , int n){
int didswap;
    for(int i=0 ; i<n-1 ; i++){
        int didswap = 0;
        for(int j=0; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                didswap=1;
            }
            
        }
            if(!didswap){
        break;

    }
    }

    
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    bubbleSort(a,n);

    // print array 
    for(int j = 0 ; j< n ; j++){
        cout << a[j] << " ";
    }
    

    return 0;

}
