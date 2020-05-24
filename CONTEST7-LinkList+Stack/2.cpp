


#include <bits/stdc++.h>
using namespace std;

vector<long long> DATA;

main(){
    long long t; cin>>t;
    while(t--){
        string action; long long num;
        cin>>action; 
        
        if(action=="PUSH") {cin>>num; DATA.push_back(num);}

        if(action=="POP"&&!DATA.empty()){
            DATA.pop_back();
        }

        if(action=="PRINT"){
            if(DATA.empty()) {cout<<"NONE";}
            else{
                // for(long long i=0;i<DATA.size();i++) 
                cout<<DATA.back()<<" ";
            }
            cout<<endl;
        }
    }
}