



#include <bits/stdc++.h>
using namespace std;

string s;

int precedence(char x){
    if(x=='^') return 4;
    if(x=='*'||x=='/') return 3;
    if(x=='+'||x=='-') return 2;
    return 1;
}

bool OPERAND(char x){
    return (x>='A'&&x<='Z')||(x>='a'&&x<='z');
}

//DUYET S[I] TU 0->S.SIZE(), 
// GAP TOAN HANG THI IN RA
// GAP TOAN TU THI: 
        //  -STACK EMPTY THI DUA VAO stack
        //  -DO UU TIEN > TOP-STACK THI DUA VAO STACK
        //  -DO UU TIEN <= TOP-STACK THI POP STACK. SAU DO PUSH(S[I]) VAO STACK
void solve(){
    vector<char> STACK;

    for(int i=0;i<s.size();i++){
        //case operand
        if(OPERAND(s[i])) {
            cout<<s[i];
        }

        // case (
        else if(s[i]=='(') STACK.push_back('(');
        
        // case )
        else if(s[i]==')'){
            while(!STACK.empty()&&STACK.back()!='('){
                cout<<STACK.back();
                STACK.pop_back();
            }
            if(STACK.back()=='(') STACK.pop_back();
        
        }
        
        //case operator
        else{
            while( !STACK.empty()&&precedence(s[i])<=precedence(STACK.back()) ){
                cout<<STACK.back();
                STACK.pop_back();
            }
            STACK.push_back(s[i]);
        }
    }

    // remaining trong stack
     while(!STACK.empty()){
            if(STACK.back()!='(') cout<<STACK.back();
            STACK.pop_back();
        }

    cout<<endl;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        solve();
    }
}