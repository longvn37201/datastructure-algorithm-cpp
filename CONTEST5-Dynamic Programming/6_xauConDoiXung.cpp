#include <bits/stdc++.h>
using namespace std;
string s;
int matrix[1001][1001];

int something(){
    
    int maxLen=1;

    //reset matrix sau moi case t
    for(int i=0;i<s.size();i++)
        for(int j=0;j<s.size();j++) 
            matrix[i][j]=0;

    //xau con chua 1 ky tu 
    for(int i=0;i<s.size();i++) matrix[i][i]=1;

    // xau con chua 2 ky tu canh nhau
    for(int i=0;i<=s.size()-2;i++){
        if(s[i]==s[i+1]) {matrix[i][i+1]=1; maxLen=2;}
    }

    // xau con nhieu hon 2 ky tu
    for(int len=3;len<=s.size();len++){
        for(int i=0;i<=s.size()-len;i++){
            int j=i+len-1;
            if(s[i]==s[j]&&matrix[i+1][j-1]) {
                matrix[i][j]=1;
                if(len>maxLen) maxLen=len;
            }
        }
    }

    return maxLen;
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        cout<<something()<<endl;
    }
}