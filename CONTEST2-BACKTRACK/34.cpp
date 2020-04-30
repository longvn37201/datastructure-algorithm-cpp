#include <iostream>
using namespace std;
int  a[9][9], sum,temp, col[50],xuoi[50],nguoc[50];

void backTrack(int i){
    for(int j=1;j<=8;j++){
        if(!col[j]&&!xuoi[i-j+8]&&!nguoc[i+j-1]){
            temp+=a[i][j];
            col[j]=1; xuoi[i-j+8]=1; nguoc[i+j-1]=1;
            if(i==8) {if(temp>=sum) sum=temp;} 
            else backTrack(i+1);
            col[j]=0; xuoi[i-j+8]=0; nguoc[i+j-1]=0;
            temp-=a[i][j];
        }
    }
}

main(){
    int t;cin>>t;
    while(t--){
        temp=0;sum=0;
        for(int i=1;i<=8;i++) for(int j=1;j<=8;j++) cin>>a[i][j];
        backTrack(1);
        cout<<sum<<endl;
    }
}