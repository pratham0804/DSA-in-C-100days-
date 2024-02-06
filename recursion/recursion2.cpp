// palindrome string 
// write a functional code (matlab return krta hai true ya false)
#include<bits/stdc++.h>
using namespace std;
char temp ;
// in string give reference 
bool isPalindrome(string &s,int l,int  i){
    if(i>=0+(l-1-0)/2) return true;

    if(s[i]!=s[l-1-i]){
        return false;
    }
    isPalindrome(s,l,++i);
    
    


}
int main(){
string str = "naman";
int l=str.size();
bool a =isPalindrome(str,l,0);
cout<<a;
    return 0;
}