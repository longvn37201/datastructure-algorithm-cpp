#include<bits/stdc++.h>
using namespace std;

//15 co the AC cho bai 16, hoac viet lai ham theo BFS

main(){
    int t;cin>>t;
    while(t--){

        //create & input
        int vertice, edge;
        cin>>vertice>>edge;
        vector<int> arr[vertice+5];
        for(int i=0;i<vertice+5;i++){ arr[i].push_back(0);}
        for(int i=1;i<=edge;i++){
            int e1,e2; cin>>e1>>e2;
            arr[e1].push_back(e2);
            arr[e2].push_back(e1);
        }

        // process
        vector<bool> vs; vs.resize(vertice+5);
        int res=0;
        for(int i=1;i<=vertice;i++){
            if(!vs[i]){
                res++;

                //DFS
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=1;j<arr[temp].size();j++){
                        if(vs[arr[temp][j]]==false){
                            vs[arr[temp][j]]=true;
                            st.push(temp);
                            st.push(arr[temp][j]);
                        }
                    }
                }
            }
        }

        cout<<res<<endl;
    }
    
}