#include<bits/stdc++.h>
using namespace std;
main(){
    long long t;cin>>t;
    while(t--){
        //create & input
        long long dinh,canh,dinhBatDau; cin>>dinh>>canh>>dinhBatDau;
        vector<long long> arr[dinh];
        for(long long i=0;i<canh;i++){
            long long temp1,temp2; cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
        }

        for(long long i=0;i<dinh;i++) sort(arr[i].begin(),arr[i].end());


        //process & output
        vector<long long> STACK;
        vector<long long> vs; vs.resize(dinh);
        STACK.push_back(dinhBatDau-1);
        vs[dinhBatDau-1]=1;
        cout<<dinhBatDau<<" ";
        
        while(!STACK.empty()){
            long long tempBack=STACK.back(); STACK.pop_back();
            for(long long i=0;i<arr[tempBack].size();i++){
                if( vs[arr[tempBack][i]]!=1 ){
                    cout<<arr[tempBack][i]+1<<" ";
                    vs[arr[tempBack][i]]=1;
                    STACK.push_back(tempBack);
                    STACK.push_back(arr[tempBack][i]);
                    break;
                }
            }
        }

        cout<<endl;
        
    }
}