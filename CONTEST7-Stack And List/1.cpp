


#include <bits/stdc++.h>
using namespace std;


main(){
    vector<int> DATA;
    while(true){
        string action; int num;
        cin>>action; 
        
        if(action=="push") {cin>>num; DATA.push_back(num);}

        if(action=="pop"&&!DATA.empty()){
            DATA.pop_back();
        }

        if(action=="show"){
            if(DATA.empty()) {cout<<"empty";break;}
            else{
                for(int i=0;i<DATA.size();i++) cout<<DATA[i]<<" ";
            }
            cout<<endl;
        }
    }
}