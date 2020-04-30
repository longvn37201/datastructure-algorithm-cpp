#include <iostream>
using namespace std;
int n,testCase=0, col[50],xuoi[50],nguoc[50];

void backTrack(int i){
    for(int j=1;j<=n;j++){
        if(!col[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
            col[j]=1; xuoi[i-j+n]=1; nguoc[i+j-1]=1;
            if(i==n) testCase++;
            else backTrack(i+1);
            col[j]=0; xuoi[i-j+n]=0; nguoc[i+j-1]=0;
        }
    }
}

main(){
    cin>>n;
    backTrack(1);
    cout<<testCase;
}