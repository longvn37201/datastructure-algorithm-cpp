#include<bits/stdc++.h>
using namespace std;
string s; 

// int STOI(string temp){
//     int res=0; 
//     for(int i=0;i<temp.size();i++){
//         res=res*10+ int(temp[i]-'0');
//     }
//     return res;
// }

main(){
   int n; cin>>n;
   getline(cin,s);
   vector<int> arr[n];
   for(int i=0;i<n;i++){
       arr[i].resize(n);
       getline(cin,s);
       for(int j=0;j<s.size();j++){
            string temp="";
           while(s[j]!=' '&&j<s.size()){
               temp+=s[j++];
           }
           if(temp!=" ") arr[i][stoi(temp)-1]=1;
       }
   }

   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
}