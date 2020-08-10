#include<bits/stdc++.h>
using namespace std;
int dinh,canh;

bool hamilton(vector<int> arr[],bool vs[], int dinhControl, int index){
    if(index==dinh-1) return true;

    for(int i=0;i<arr[dinhControl].size();i++){
        if(vs[arr[dinhControl][i]]==false){
            vs[arr[dinhControl][i]]=true;
            if(hamilton(arr,vs,arr[dinhControl][i],index+1)) return true;
            vs[arr[dinhControl][i]]=false;
        }
    }

    return false;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>dinh>>canh;
        vector<int> arr[dinh+40];
        for(int i=0;i<canh;i++){
            int temp1,temp2;cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            arr[temp2-1].push_back(temp1-1);
        }
        bool OK=false;
        for(int i=0;i<dinh;i++){
            bool vs[dinh+40]={false}; vs[i]=true;
            if(hamilton(arr,vs,i,0)) {cout<<1;OK=true; break;}

        }
        if(!OK) cout<<0;
        cout<<endl;
    }
}





