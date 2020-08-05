#include<bits/stdc++.h>
using namespace std;
 int dinh,canh;


bool coChuTrinh(int dinhXet,vector<int> arr[],vector<int> vs){
    vector<int> parent; parent.resize(dinh);
    queue<int> q;
    q.push(dinhXet);
    vs[dinhXet]=1;
    //BFS
    while(!q.empty()){
        int temp=q.front(); q.pop();
        for(int i=0;i<arr[temp].size();i++){
            if(vs[arr[temp][i]]){
                if(parent[temp]!=arr[temp][i]) return true;
            }else{
                vs[arr[temp][i]]=1;
                parent[arr[temp][i]]=temp;
                q.push(arr[temp][i]);
            }
        }
    }
    return false;

}
 
main(){
    int t;cin>>t;
    while(t--){
       cin>>dinh;
        vector<int> arr[dinh];
        for(int i=0;i<dinh-1;i++){
            int temp1,temp2;cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            arr[temp2-1].push_back(temp1-1);
        }

        bool OK=false;
        vector<int> vs; vs.resize(dinh); 
        for(int i=0;i<dinh;i++){
            if(vs[i]!=1&&coChuTrinh(i,arr,vs)){
               OK=true; cout<<"NO"; break;
            }
        }
        if(!OK) cout<<"YES"; cout<<endl;
    }
}