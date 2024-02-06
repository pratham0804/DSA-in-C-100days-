#include<bits/stdc++.h>
using namespace std;
void doSomething(int *num){
    *num+=5;
    cout << *num << endl;
}
int main(){
    int n;
    cin >> n;
    doSomething(&n);
    cout << n;
    return 0;
}


// when we pass the array , it by default passes with its refernce , no need to pass its address manually 
