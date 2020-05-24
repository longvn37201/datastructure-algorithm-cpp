



#include <bits/stdc++.h>
using namespace std;

string s;

// int precedence(char x){
//     if(x=='^') return 4;
//     if(x=='*'||x=='/') return 3;
//     if(x=='+'||x=='-') return 2;
//     return 1;
// }

// bool OPERATOR(char x){
//     if(x=='+') return 1;
//     if(x=='-') return 1;
//     if(x=='*') return 1;
//     if(x=='/') return 1;
//     return 0;
// }
bool OPERAND(char x){
    return (x>='0'&&x<='9');
}

void solve(){
    vector<int> STACK;

    for(int i=s.size()-1;i>=0;i--){
        if(OPERAND(s[i])) { 
            // string temp=""; temp+=s[i]; 
            STACK.push_back(int(s[i]-'0'));
        }
        // if(OPERATOR(s[i]))
        else{
            // string temp1="",temp2="";
            // temp1+=STACK.back(); 
            // STACK.pop_back();
            // temp2+=STACK.back();
            // STACK.pop_back();
            // temp1='('+temp2+s[i]+ temp1+')';
            // STACK.push_back(temp1);
            int temp1,temp2;
            temp2=STACK.back();
            STACK.pop_back();
            temp1=STACK.back();
            STACK.pop_back();
            int res;
            switch(s[i]){
                case '-': {res=temp2-temp1; break;}
                case '+': {res=temp2+temp1; break;}
                case '*': {res=temp2*temp1; break;}
                case '/': {res=temp2/temp1; break;}
            }
            // cout<<res<<" ";
            STACK.push_back(res);
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