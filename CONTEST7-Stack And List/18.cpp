



#include <bits/stdc++.h>
using namespace std;

string s;

long long PRECEDENCE(char x){
    if(x=='*'||x=='/') return 3;
    if(x=='+'||x=='-') return 2;
    return 1;
}
bool OPERATOR(char x){
    if(x=='+') return 1;
    if(x=='-') return 1;
    if(x=='*') return 1;
    if(x=='/') return 1;
    return 0;
}
bool OPERAND(char x){
    return (x>='0'&&x<='9');
}

void solve(){
    vector<long long> operandStack;
    vector<char> operatorStack;

    for(long long i=0;i<s.size();i++){
        //case (
        if(s[i]=='(') operatorStack.push_back('(');
        // case toan hang. note: o day toan hang co the gom nhieu chu so
        if(OPERAND(s[i])) {
            long long num=0;
            while(i<s.size()&&OPERAND(s[i])){
                num=num*10+(s[i]-'0');
                i++;
            }
            operandStack.push_back(num);
        }    
        // case toan tu
        if(OPERATOR(s[i])){
            while(!operatorStack.empty()&&PRECEDENCE(operatorStack.back())>=PRECEDENCE(s[i])){
                long long num1,num2;
                num2=operandStack.back();
                operandStack.pop_back();
                num1=operandStack.back();
                operandStack.pop_back();
                switch(operatorStack.back()){
                    case '+': {num1=num1+num2;break;}
                    case '-': {num1=num1-num2;break;}
                    case '*': {num1=num1*num2;break;}
                    case '/': {num1=num1/num2;break;}
                }
                operatorStack.pop_back();
                operandStack.push_back(num1);
            }
            operatorStack.push_back(s[i]);
        }
        //case )
        if(s[i]==')'){
            while(!operatorStack.empty()&&operatorStack.back()!='('){
                long long num1,num2;
                num2=operandStack.back();
                operandStack.pop_back();
                num1=operandStack.back();
                operandStack.pop_back();
                switch(operatorStack.back()){
                    case '+': {num1=num1+num2;break;}
                    case '-': {num1=num1-num2;break;}
                    case '*': {num1=num1*num2;break;}
                    case '/': {num1=num1/num2;break;}
                }
                operatorStack.pop_back();
                operandStack.push_back(num1);
            }
            if(!operatorStack.empty()&&operatorStack.back()=='(') operatorStack.pop_back();
        }
    }
    //sau khi duyet het size S, neu con du operatorStack thi tiep tuc tinh toan gia tri
    while(!operatorStack.empty()){
        long long num1,num2;
        num2=operandStack.back();
        operandStack.pop_back();
        num1=operandStack.back();
        operandStack.pop_back();
        switch(operatorStack.back()){
            case '+': {num1=num1+num2;break;}
            case '-': {num1=num1-num2;break;}
            case '*': {num1=num1*num2;break;}
            case '/': {num1=num1/num2;break;}
        }
        operatorStack.pop_back();
        operandStack.push_back(num1);
    }
    cout<<operandStack.back()<<endl;
}

main(){
    long long t;cin>>t;
    while(t--){
        cin>>s;
        solve();
    }
}