#include <iostream>
#include<algorithm>
using namespace std;
string s; int k,location,mark;

void whereMax(){
     location=s.length()-1;
    for(int i=s.length()-2;i>mark;i--){
        if(s[i]-'0'>s[location]-'0') location=i;
    }
}
void fuckingServer(){
    if(s.length()==1) return;
    else {
        mark=0;
        while(mark<s.length()-1&&k--){
            whereMax();
            while(mark<s.length()-1 && s[mark]>=s[location]){
                mark++; whereMax();
            }
            swap(s[mark],s[location]);
            mark++;
        }
    }
}

main(){
	
    int t;cin>>t;
    while(t--){
        cin>>k;
        cin>>s;
        fuckingServer();
        cout<<s<<endl;
    }
}
