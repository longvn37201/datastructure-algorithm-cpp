#include<bits/stdc++.h>
using namespace std;
int dinh,canh;

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

int dem2(vector<int> arr[],int dinhBoQua1,int dinhBoQua2){
        vector<bool> vs; vs.resize(dinh);
        int res=0;
        for(int i=0;i<dinh;i++){
            // if(i==dinhBoQua) continue;
            if(!vs[i]){
                res++;

                //DFS
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=0;j<arr[temp].size();j++){
                        if( (arr[temp][j]==dinhBoQua1 and temp==dinhBoQua2)
                            or (arr[temp][j]==dinhBoQua2 and temp==dinhBoQua1)
                            or vs[arr[temp][j]]==true );
                            else{
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
        vector<int> danhSachCanh[canh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;
            danhSachCanh[i].push_back(temp1-1);
            danhSachCanh[i].push_back(temp2-1);
            arr[temp1-1].push_back(temp2-1);
            arr[temp2-1].push_back(temp1-1);
        }

        //so tp lien thong
        
        
        int soThanhPhanLienThong=dem(arr);
        for(int i=0;i<canh;i++){
            if(dem2(arr,danhSachCanh[i][0],danhSachCanh[i][1])>soThanhPhanLienThong) cout<<danhSachCanh[i][0]+1<<" "<<danhSachCanh[i][1]+1<<" ";
            
        }
        // cout<<dem2(arr,1,4);
        cout<<endl;
    }
}