#include<bits/stdc++.h>
using namespace std;
 int dinh,canh;


 bool coChuTrinh(int dinhDau,vector<int> arr[],vector<int> vs,vector<int> vsTrongDeQuy){
     if(vs[dinhDau]!=1){
         vs[dinhDau]=1;
         vsTrongDeQuy[dinhDau]=1;
         for(int i=0;i<arr[dinhDau].size();i++){
             if(vsTrongDeQuy[arr[dinhDau][i]]==1) return true;
             else{
                 if(vs[arr[dinhDau][i]]!=1&&coChuTrinh(arr[dinhDau][i],arr,vs,vsTrongDeQuy)) return true;
             }
         }
     }
     vsTrongDeQuy[dinhDau]=0;
     return false;
 }
main(){
    int t;cin>>t;
    while(t--){
       cin>>dinh>>canh;
        vector<int> arr[dinh];
        for(int i=0;i<canh;i++){
            int temp1,temp2;cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            // arr[temp2-1].push_back(temp1-1);
        }

        bool OK=false;
        vector<int> vs; vs.resize(dinh); 
        vector<int> vsTrongDeQuy; vsTrongDeQuy.resize(dinh); 
        for(int i=0;i<dinh;i++){
            if(coChuTrinh(i,arr,vs,vsTrongDeQuy)){
               OK=true; cout<<"YES"; break;
            }
        }
        if(!OK) cout<<"NO"; cout<<endl;
    }
}