// function calls itself , until a specified condition is met 

// segmentation faults 
// is duue to stack overflow 

// the functions calls in recursionn are piled up in stack , 
// when infinite loop is formed , after certain point , no more function calls can be stored in 
// the stack , 
// thus we call it as sttack overflow 


    // BASE CONDITION

    // condition used to  end the recursive calls 
#include<bits/stdc++.h>
using namespace std;
// int counter=0;
// void printcounter(){
//     if(counter==3) return;
//     counter++;
//     printcounter();
// }
// int main(){
//     return 0;
// }  




// QUESTION NUMBER 1  
// SUM OOF N NATURAL NUMBERS USING RECURSION 


// my method(functional)  has sum variable
// int sumation(int n){
//     if(n==0) return sum;
//     sum=sum+n;
//     sumation(n-1);
// }


// alternative way 
// functional method without extra variable
// int add(int n){
//     if(n==0) return 0;

//     return n + add(n-1);
// }


// parameterized way (no return , print the sum)
// isme storage  variable and iteration parameter pass krte hai 
void printsum(int i , int sum)
{
    if(i<1) {
        cout<<sum;
        return;
    }
    printsum(i-1,sum+i);
}


int main(){
    // int a=sumation(0);  OR
    // int a = add(5); OR 
    // cout<<a;

    printsum(5,0);
    return 0;
}