#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){

        //input
        int dinh,canh,start; cin>>dinh>>canh>>start;
        vector<int> arr[dinh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            arr[temp2-1].push_back(temp1-1);
        }

        //process
        vector<int> st;  //stack luu dinh control
        vector<int> vs; vs.resize(dinh);  //visited danh dau da in
        cout<<start<<" ";
        st.push_back(start-1);
        vs[start-1]=1;
        while(!st.empty()){
            int temp=st.back(); st.pop_back();
            for(int i=0;i<arr[temp].size();i++){
                if(vs[ arr[temp][i] ]!=1){
                    cout<<arr[temp][i]+1<<" ";
                    vs[ arr[temp][i] ]=1;
                    st.push_back(temp);
                    st.push_back(arr[temp][i]);
                    break;
                }
            }
        }

        cout<<endl;
    }
}