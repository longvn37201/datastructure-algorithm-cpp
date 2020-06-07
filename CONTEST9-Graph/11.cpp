#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        bool check=false;
        //create & input
        int dinh,canh,dinhBatDau,dinhKetThuc; cin>>dinh>>canh>>dinhBatDau>>dinhKetThuc;
        vector<int> arr[dinh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            // arr[temp2-1].push_back(temp1-1);
        }
        // for(int i=0;i<dinh;i++) sort(arr[i].begin(),arr[i].end());


        //process & output
        vector<int> truoc; truoc.resize(dinh);
        vector<int> STACK;
        vector<int> vs; vs.resize(dinh);
        STACK.push_back(dinhBatDau-1);
        vs[dinhBatDau-1]=1;
        // cout<<dinhBatDau<<" ";
        truoc[dinhBatDau-1]=-69;
        
        while(!STACK.empty()){
            int tempBack=STACK.back(); STACK.pop_back();
            for(int i=0;i<arr[tempBack].size();i++){
                if( vs[arr[tempBack][i]]!=1 ){
                    truoc[arr[tempBack][i]]=tempBack;
                    // cout<<arr[tempBack][i]+1<<"-"<<truoc[arr[tempBack][i]]<<" ";
                    if(arr[tempBack][i]==dinhKetThuc-1) check=true;
                    vs[arr[tempBack][i]]=1;
                    STACK.push_back(tempBack);
                    STACK.push_back(arr[tempBack][i]);
                    break;
                }
            }
        }


        // output
        if(check==false) cout<<-1;
        else{
            vector<int> res;
            res.push_back(dinhKetThuc-1);
            int control=dinhKetThuc-1;
            while(control!=-69){
                control=truoc[control];
                res.push_back(control);
            }

            for(int i=res.size()-2;i>=0;i--){
                cout<<res[i]+1<<" ";
            }
        }


        cout<<endl;
        
    }
}