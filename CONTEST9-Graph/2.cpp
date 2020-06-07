#include<bits/stdc++.h>
using namespace std;
main(){
    int n; cin>>n;
    vector<int> arr[n];
    string s; 
    getline(cin,s);
    for(int i=0;i<n;i++){

        getline(cin,s);
        
        for(int j=0;j<s.size();j++){
            if(s[j]!=' '){
                string temp;
                while(s[j]!=' '&&j<s.size())
                    temp+=s[j++];
                arr[i].push_back(stoi(temp));    
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]>i+1)
                cout<<i+1<<" "<<arr[i][j]<<endl;
        }
    }
}