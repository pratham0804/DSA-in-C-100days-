#include<bits/stdc++.h>
using namespace std;
//unordered hash map 
// data is not stored in sorted order .
// advantage of unorderred map over normal map is 
// the time complexity for storing and fetching data in normal mapping is log(n) (in all three cases )
// and for unordered , tc is O(1) for best and average case and O(N) for worst case 
// worst case is rare ,
// always make use of unordered map 
// if it fails , switch back to map
// worst case occurs due to internal collison .

int main(){
    string str ="Prathameshasjdfdsjflds jlkskdfjlksajk";
    map<char,int> mpp;
    for(int i=0 ; i<str.size();i++){
        mpp[str[i]]++;
    }    

    
    int t;
    cin>> t;
    while(t--){
        char ch ;
        cin>>ch;

        cout<<mpp[ch];
    }
    return 0;
}