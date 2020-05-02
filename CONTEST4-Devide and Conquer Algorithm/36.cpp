#include <bits/stdc++.h>
using namespace std;

string s1,s2;

long long binToDec(string s){
    int temp=1,result=0;
    for(int i=s.size()-1;i>=0;i--){
        result+=temp*(int)(s[i]-'0');     
        temp*=2;
    }return result;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s1>>s2; 
        cout<<binToDec(s1)*binToDec(s2)<<endl;
    }
}