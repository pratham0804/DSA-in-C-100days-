// does not use extra array like mergesort
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
// function for finding pivotIndex.
int partition(vector<int> &b , int low  , int high){
    int pivot = low ;
    int i=low;
    int j=high;
    int  x=0;
    while(i<j){
        while(b[pivot]>=b[i] && i<=j ){
            i++;
        }
        while(b[pivot]<b[j] && j>=low){
            j--;
        }
        if(i<j){
        swap(&b[i],&b[j]);
        }  
    }

    if(j<=i){
       x=j;
       swap(&b[pivot],&b[j]); 
    }

    return x;
}
void quicksort(vector<int> &a , int low, int high){
    if(low<high){
       int partitionIndex  = partition(a , low ,high); 
       quicksort(a,low,partitionIndex-1);
       quicksort(a,partitionIndex+1 , high);
    }
}
int main(){
    return 0;
}