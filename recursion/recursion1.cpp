//QUESTION :- REVERSE AN ARRAY;
#include<bits/stdc++.h>
using namespace std;
int temp=0;
// function using two pointer 
// void reverseArr( int a[],int n, int l , int u){
    
//     if(l>=u) return;

//     temp=a[l];
//     a[l]=a[u];
//     a[u]=temp;

//     reverseArr(a,n,++l,--u);


// }

// function  using one pointer.
void reverseArray(int a[], int n, int i){
    if(i>=(0+((n-1)-0)/2)) return ;

    temp = a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
    reverseArray(a,n,++i);
}
int main(){
    int  arr[]={
        4,34,23,11,34
    };
    //  reverseArr(arr,5,0,4);
    reverseArray(arr,5,0);
    for(int i=0 ; i<=4 ; i++){
        cout<<arr[i]<<endl;
    }
      
    return 0;
}