#include<bits/stdc++.h>
using namespace std;
//pattern1
void print1(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//pattern2
void print2(int n){
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

//pattern3
void print3(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



//pattern4
void print4(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


//pattern5
void print5(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


//pattern6
void print6(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


//pattern7 
void print7(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        
        for(int k=1 ; k<=2*i-1 ; k++){
            cout<<"*";
        }
        cout<<endl;
    }  
}


//pattern8
void print8(int n){
    for(int i=n; i>=1 ; i--){

        for(int k=1 ; k<=n-i ; k++){
            cout<<" ";
        }

        for(int j=1 ; j<=2*i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



// pattern9
//best solution 
void print9(int n){
    for(int i=1 ; i<=2*n-1; i++){
        if(i<=n){
            for(int j=1 ; j<=n-i ; j++){
                cout<<" ";
            }

            for(int k=1 ; k<=2*i-1 ; k++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int l=1 ; l<=i-n; l++){
                cout<<" ";
            }

            for(int m = (2*n-1)-2*(i-n); m>=1 ; m--){
                cout<<"*";
            }

            cout<<endl;
        }  
    }
}


//pattern 10
void print10(int n){
    int count=0;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i ; j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}



//pattern 11
void print11(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i ; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}


//pattern 12 


// pattern 1
// Time complexity : O(n^2/2).
// OUTPUT;
// * * * * 
// * * * *
// * * * *
// * * * *


//pattern 2 
// Time complexity :- O(n^2)
// *
// * *
// * * *
// * * * *
// * * * * *

//pattern 3
// Time complexity :- O(n^2/2)
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6


// pattern 4
// Time complexity :- O(n^2/2)
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6


//pattern 5
// Time Complexity:- 
// * * * * * 
// * * * *
// * * *
// * *
// *


//pattern 7 
// Time Complexity :- 
//     *
//    ***
//   *****
//  *******
// *********