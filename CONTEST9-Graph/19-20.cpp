#include<bits/stdc++.h>
using namespace std;
int dinh,canh;
// bool DFS(int start, vector<int> arr[]){
//     int count=0;
//     stack<int> st;
//     vector<int> vs; vs.resize(dinh);
//     st.push(start); vs[start]=1;
//     count++;
//     while(!st.empty()){
//         int temp=st.top(); st.pop();
//         for(int i=0;i<arr[temp].size();i++){
//             if(vs[arr[temp][i]]!=1){
//                 count++;
//                 vs[arr[temp][i]]=1;
//                 st.push(temp);
//                 st.push(arr[temp][i]);
//             }
//         }
//     }
//     if(count==dinh) return true;
//     return false;
// }

int dem(vector<int> arr[]){
        vector<bool> vs; vs.resize(dinh);
        int res=0;
        for(int i=0;i<dinh;i++){
            if(!vs[i]){
                res++;

                //DFS
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=0;j<arr[temp].size();j++){
                        if(vs[arr[temp][j]]==false){
                            vs[arr[temp][j]]=true;
                            st.push(temp);
                            st.push(arr[temp][j]);
                        }
                    }
                }
            }
        }
        return res;
}

int dem2(vector<int> arr[],int dinhBoQua){
        vector<bool> vs; vs.resize(dinh);
        int res=0;
        for(int i=0;i<dinh;i++){
            if(i==dinhBoQua) continue;
            if(!vs[i]){
                res++;

                //DFS
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=0;j<arr[temp].size();j++){
                        if(arr[temp][j]!=dinhBoQua and vs[arr[temp][j]]==false){
                            vs[arr[temp][j]]=true;
                            st.push(temp);
                            st.push(arr[temp][j]);
                        }
                    }
                }
            }
        }
        return res;
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
            arr[temp2-1].push_back(temp1-1);
        }

        //so tp lien thong
        
        
        int soThanhPhanLienThong=dem(arr);
        for(int i=0;i<dinh;i++){
            if(dem2(arr,i)>soThanhPhanLienThong) cout<<i+1<<" ";
            
        }

        cout<<endl;
    }
}