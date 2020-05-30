



#include <bits/stdc++.h>
using namespace std;

string s;

// int precedence(char x){
//     if(x=='^') return 4;
//     if(x=='*'||x=='/') return 3;
//     if(x=='+'||x=='-') return 2;
//     return 1;
// }

bool OPERATOR(char x){
    if(x=='+') return 1;
    if(x=='-') return 1;
    if(x=='*') return 1;
    if(x=='/') return 1;
    return 0;
}
bool OPERAND(char x){
    return (x>='A'&&x<='Z')||(x>='a'&&x<='z');
}

// DUYET TU PHAI QUA TRAI, GAP TOAN HANG THI DUA VAO STACK, GAP TOAN TU THI LAY 2 TOAN HANG TRONG STACK RA ROI TAO THANH 1 BIEU THUC
void solve(){
    vector<string> STACK;

    for(int i=s.size()-1;i>=0;i--){
        if(OPERAND(s[i])) { 
            string temp=""; temp+=s[i]; STACK.push_back(temp);
        }
        if(OPERATOR(s[i])){
            string temp1="",temp2="";
            temp1+=STACK.back(); 
            STACK.pop_back();
            temp2+=STACK.back();
            STACK.pop_back();
            temp1='('+temp1+s[i]+temp2+')';
            STACK.push_back(temp1);
        }

    }
    cout<<STACK.back()<<endl;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        solve();
    }
}