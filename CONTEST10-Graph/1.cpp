#include<bits/stdc++.h>
using namespace std;

int dinh,canh,soMau;

bool TEST(vector<vector<int>> arr,vector<int> toMau,int mauTest,int dinhHienTai){
    for(int i=0;i<dinh;i++){
        if(arr[dinhHienTai][i]==1&&mauTest==toMau[i]) return false;
    }
    return true;

}

bool coTheToMau(vector<vector<int>> arr, vector<int> toMau, int index){
    if(index==dinh) return true;
    for(int i=1;i<=soMau;i++){
        if(TEST(arr,toMau,i,index)){
            toMau[index]=i;
            if(coTheToMau(arr,toMau,index+1)) return true;
            toMau[index]=0;
        } 
    }
    return false;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>dinh>>canh>>soMau;
        vector<vector<int>> arr; arr.resize(dinh);
        for(int i=0;i<dinh;i++) arr[i].resize(dinh);

        //input
        for(int i=0;i<canh;i++){
            int temp1,temp2;cin>>temp1>>temp2;
            arr[temp1-1][temp2-1]=1;
            arr[temp2-1][temp1-1]=1;
        }

    //     for(int i=0;i<dinh;i++){
    //     for(int j=0;j<dinh;j++){
    //        cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
        
        vector<int> toMau; toMau.resize(dinh);
        if(coTheToMau(arr,toMau,0)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;


    }
}