#include<bits/stdc++.h>
using namespace std;

void solution(string s){
    vector<int> STACK;
    for(int i=0,run=1;i<=s.size();i++,run++){
        STACK.push_back(run);
        if(s[i]=='I'||i==s.size()){
            while(!STACK.empty()){
                cout<<STACK.back(); 
                STACK.pop_back();
            }
        }
    }
    cout<<endl;
}

 main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
        solution(s);
	}
}