#include<bits/stdc++.h>
using namespace std;

int main(){
    int age ;
    cout << "ENter your age";
    cin >> age;
    if(age < 18){
        cout << "not eligible for job";
    }
    // dont  give two conditions , age >= 18 is for sure , as the previous condition becomes false.
    else if(age <=54){
        cout << "eligible for job";

    }
    else if(age <=57 ){
        cout << "eligible for job but retirement soon";
    }
    else{
        cout<< "retirement time";
    }
    return 0;
}