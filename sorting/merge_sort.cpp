#include<bits/stdc++.h>
using namespace std;
// time complexity of me rge sort
// merge sort is optimised than , bubble , slection and insertion sort.
void merge(int a[] , int l , int u , int mid){
    int i=l;
    int j=mid+1;
    vector<int> arr;

    while(i<=mid && j<=u ){
        if(a[i]<=a[j]){
            arr.push_back(a[i]);
            i++;
        }
        else{
            arr.push_back(a[j]);
            j++;
        }

    }

    while(i<=mid){
        arr.push_back(a[i]);
        i++;
    }

    while(j<=u){
        arr.push_back(a[j]);
        j++;
    }


    for(int k=l; k<=u ; k++){
        a[i]=arr[i-l];
    }
}


void merge_sort(int a[],int l , int u){
   
    if(l>=u) return ;
    int mid = l+((u-l)/2);


    merge_sort(a,0,mid);
    merge_sort(a,mid+1,u);
    merge(a,l,mid,u);

}
int main(){

     return 0;
}

//  time complexity  of merge sort is n*logn
