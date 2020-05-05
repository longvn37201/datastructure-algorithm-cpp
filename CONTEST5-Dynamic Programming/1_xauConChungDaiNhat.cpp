#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int matrix[1001][1001];
int something(){
    int result;
    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1]){
                matrix[i][j]=matrix[i-1][j-1]+1;
            }else{
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
            }
        }
    }return matrix[s1.size()][s2.size()];
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<something()<<endl;
    }
}