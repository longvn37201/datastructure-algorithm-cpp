#include<bits/stdc++.h>
using namespace std;
int canh, dinh;
vector<vector<int>> arr;
main(){
    int t;cin>>t;
    while(t--){
        arr.clear();
        cin>>dinh>>canh;
        arr.resize(dinh);
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;

            arr[temp1-1].push_back(temp2);
            arr[temp2-1].push_back(temp1);
        }
        for(int i=0;i<dinh;i++){
            sort(arr[i].begin(),arr[i].end());
            cout<<i+1<<": ";
            for(int j=0;j<arr[i].size();j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;   
        }
    }
}