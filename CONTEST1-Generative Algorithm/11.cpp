#include <iostream>
using namespace std;

string grayToBin(string gray){
    string binary="";
    binary+=gray[0]=='1'?'1':'0';
    for(int i=1;i<gray.length();i++)
        binary+= gray[i]==binary[i-1]?'0':'1';
    return binary;
}


main(){
    int t;cin>>t;
    while(t--){
        string gray; cin>>gray;
        cout<<grayToBin(gray)<<endl;;
    }
}