#include<bits/stdc++.h>
using namespace std;
// for fibonacci remember the base condition .
// time complexity :- O(2^n); exponential in nature.
int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int a;
cin>>a;
int x=fibonacci(a);
cout<<x;
    return 0;
}