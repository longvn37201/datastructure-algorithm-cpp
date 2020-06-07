#include <bits/stdc++.h>
using namespace std;

int vertice,edge;

bool bfs(vector<int> arr[],int start, int end){
    queue<int> q; q.push(start-1);
    vector<int> vs; vs.resize(vertice);  vs[start-1]=1;
    // vector<int> before; before.resize(vertice); before[start-1]=-69;
    // bool check=false; 
    while(!q.empty()){
        int f=q.front();
        for(int i=0;i<arr[f].size();i++){
            if(vs[arr[f][i]]!=1){
                if(arr[f][i]==end-1) return true;
                // before[arr[f][i]]=f;
                vs[arr[f][i]]=1;
                q.push(arr[f][i]);
            }
        }
        q.pop();
    }
    return false;
}

main(){

    int t;cin>>t;
    while(t--){

        //input
        cin>>vertice>>edge;
        vector<int> arr[vertice];
        for(int i=0;i<edge;i++){
            int edge1,edge2; cin>>edge1>>edge2;
            arr[edge1-1].push_back(edge2-1);
            arr[edge2-1].push_back(edge1-1);

        }
        int Q;cin>>Q;
        while(Q--){
            int start,end;
            cin>>start>>end;
            if(bfs(arr,start,end)) cout<<"YES"; else cout<<"NO";
            cout<<endl;
        }


        //process
        // queue<int> q; q.push(start-1);
        // vector<int> vs; vs.resize(vertice);  vs[start-1]=1;
        // vector<int> before; before.resize(vertice); before[start-1]=-69;
        // bool check=false; 
        // while(!q.empty()){
        //     int f=q.front();
        //     for(int i=0;i<arr[f].size();i++){
        //         if(vs[arr[f][i]]!=1){
        //             if(arr[f][i]==end-1) check=true;
        //             before[arr[f][i]]=f;
        //             vs[arr[f][i]]=1;
        //             q.push(arr[f][i]);
        //         }
        //     }
        //     q.pop();
        // }



        // outp
        // if(check){
        //     vector<int> res;
        //     res.push_back(end-1);
        //     int control=end-1;
        //     while(control!=-69){
        //         control=before[control];
        //         res.push_back(control);
        //     }

        //     for(int i=res.size()-2;i>=0;i--){
        //         cout<<res[i]+1<<" ";
        //     }
        // }else cout<<-1;
        // cout<<endl;
        

            
        
    }
}