#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    string str;
    cin>>str;
    int charhash[27]={0};

   for(int i=0 ; i<str.size() ; i++){
    charhash[(int)str[i]-97]++;
   } 

    
    
    while(t--){
      char i;
      cin>>i;
    
    cout<<charhash[(int)i - 97];
    
    }

    return 0;
}
// There are total 256 characters , and operating on characteres we can easily allocate this much space 
// if you are neede to operate of all the characters , take integer hash array ,,
// and do not get into the typecasting , due  to auto casting probkem gets solved 
