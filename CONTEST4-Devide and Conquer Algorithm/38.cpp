

#include <bits/stdc++.h>
using namespace std;
int m,n,k;

// vector<int> mergeByMe(vector<int> a,vector<int> b){
//     vector<int> c;
//     int indexA=0,indexB=0;
//     while(indexA<a.size()&&indexB<b.size()){
//         if(a[indexA]<b[indexB]){
//             c.push_back(a[indexA++]);
//         }else c.push_back(b[indexB++]);
//     }
//     while(indexA<a.size()){
//         c.push_back(a[indexA++]);
//     }
//     while(indexB<b.size()){
//         c.push_back(b[indexB++]);
//     }

//     return c;
// }

main(){
    int t; cin>>t;
   	while(t--){
           cin>>m>>n>>k;
            vector<int> a,b;
           for(int i=0;i<m;i++) {int temp; cin>>temp; a.push_back(temp);}
           for(int i=0;i<n;i++) {int temp; cin>>temp; b.push_back(temp);}
            
            // Different ways
            // vector<int> c=mergeByMe(a,b);
            
            vector<int> c(m+n);
            merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
            
            cout<<c[k-1]<<endl;
    }
}


