#include<bits/stdc++.h>
using namespace std;
// worst and average case is O(n^2)
// best case is O(n);
// best case me , ek baar array ka iteration but no swapping 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int a[], int n){
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && a[j] < a[j-1]){
            swap(&a[j], &a[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    insertion(a, n);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
