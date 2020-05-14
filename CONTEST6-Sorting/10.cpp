#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      bool num[10]={false};
      int temp; cin>>temp;
      for(int i=0;i<temp;i++){
        string s; cin>>s;
        for(int i=0;i<s.size();i++)
            num[ int(s[i]-'0') ]=true;
        
      }
      for(int i=0;i<10;i++) if(num[i]) cout<<i<<" ";
      cout <<endl;
    }
}