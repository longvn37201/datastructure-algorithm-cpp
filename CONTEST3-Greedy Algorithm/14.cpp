#include <bits/stdc++.h>
using namespace std;

vector<string> createVectorStrCube(long long n){
    vector<string> result;
    //push cac lap phuong nho hon n vao 
    for(long long i=1;i*i*i<=n;++i){
        result.push_back(to_string(i*i*i));
    }

    // reverse result
    reverse(result.begin(),result.end());
    return result;
}


string answer(vector<string> cube, string n){
    for(long long i=0;i<cube.size();i++){
        long long index=0;
        for(long long j=0;j<n.length();j++){
            if(n[j]==cube[i][index]) index++;
        }
        if(index==cube[i].length()) return cube[i];
    }
    return "-1";
}


main(){
    long long t;cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<string> cube= createVectorStrCube(n); 
        // for(long long i=0;i<cube.size();i++) cout<<cube[i]<<" ";  //test cube

        cout<<answer(cube,to_string(n))<<endl;


    }
}