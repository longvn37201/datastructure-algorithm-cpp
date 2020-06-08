#include<bits/stdc++.h>
using namespace std;
int dinh,canh;
bool DFS(int start, vector<int> arr[]){
    int count=0;
    stack<int> st;
    vector<int> vs; vs.resize(dinh);
    st.push(start); vs[start]=1;
    count++;
    while(!st.empty()){
        int temp=st.top(); st.pop();
        for(int i=0;i<arr[temp].size();i++){
            if(vs[arr[temp][i]]!=1){
                count++;
                vs[arr[temp][i]]=1;
                st.push(temp);
                st.push(arr[temp][i]);
            }
        }
    }
    if(count==dinh) return true;
    return false;
}

main(){
    int t;cin>>t;
    while(t--){
        //input
         cin>>dinh>>canh;
        vector<int> arr[dinh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
        }

        int count=0;
        for(int i=0;i<dinh;i++){
            if(DFS(i,arr)) count++;
            else break;
        }
        if(count!=dinh){
            cout<<"NO";
        }else cout<<"YES";

        cout<<endl;
        
    }
}