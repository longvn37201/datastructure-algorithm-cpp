

#include <bits/stdc++.h>
using namespace std;
int n;

main(){
    int t; cin>>t;
   	while(t--){
           cin>>n;
           int result=0;
           for(int i=1;i<=n;i++){
               int temp; cin>>temp;
               if(temp==0) result=i;
           }
           cout<<result<<endl; 
    }
}


