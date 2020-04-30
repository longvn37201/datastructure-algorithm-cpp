






// idea

// for (int row = i - 1; row <= i + 1 && row < M; row++) 
//         for (int col = j - 1; col <= j + 1 && col < N; col++) 
//             if (row >= 0 && col >= 0 && !visited[row][col]) 
//                 findWordsUtil(boggle, visited, row, col, str); 

#include <bits/stdc++.h>
using namespace std;
int k,m,n;
string s[200];
char c[100][100];
bool visited[100][100]={{false}};
int testCase;

bool isWord(string str){
    for(int i=1;i<=k;i++)
        if(s[i]==str) return true;
    return false;    
}

void findWord(string str, int i, int j){
    visited[i][j]=true;
    str+=c[i][j];

    if(isWord(str)) {cout<<str<<" "; testCase++;}

    for(int row=i-1;row<=i+1&&row<=m;row++){
        for(int col=j-1;col<=j+1&&col<=n;col++)
            if(!visited[row][col]&&row>0&&col>0)
                findWord(str,row,col);
    }
    visited[i][j]=false;
    str.pop_back();


}

void findChar(){
    string str="";
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++){
            findWord(str,i,j);
        }
}

main(){
    int t; cin>>t;
    while(t--){
        testCase=0;
        cin>>k>>m>>n;
        for(int i=1;i<=k;i++)
            cin>>s[i];
        for(int i=1;i<=m;i++)  for(int j=1;j<=n;j++) cin>>c[i][j];
        findChar();
        if(!testCase) cout<<-1;
        cout<<endl;
    }
}