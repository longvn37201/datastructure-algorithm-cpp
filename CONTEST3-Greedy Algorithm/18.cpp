#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int t; cin>>t;
    while(t--){
        int sum;cin>>sum;
        if(sum<4) cout<<-1;
        else{
            int four=0, seven=0;
            while(sum>=4&&sum%7!=0){
                sum-=4; four++;
            }
            while(sum!=0&&sum%7==0){
                sum-=7; seven++;
            }
            if(sum==0){
                while(four--) cout<<4;
                while(seven--) cout<<7;
            }else cout<<-1;
        }
        cout<<endl;
    }
        
} 