#include<bits/stdc++.h>
using namespace std;
main(){
    int dinh;cin>>dinh;
    vector<int> arr[dinh];
    for(int i=0;i<dinh;i++){
        for(int j=1;j<=dinh;j++){
            int temp;cin>>temp;
            if(temp==1) arr[i].push_back(j);
        }
    }
    for(int i=0;i<dinh;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}