#include <iostream>
using namespace std;
int n,sum,a[50],num=0,testCase=0,testSum=0;

void backTrack(int i,int index, int max){
    if(testCase) return;
    for(int j=index;j<=n;j++){
        if(testCase) return;
        testSum+=a[j]; num++;
        if(i==max){
            if(testSum==sum){
                // cout<<testSum<<"-"<<num<<" ";
                testCase++; return;
            }
        }else backTrack(i+1,j+1,max);
        if(testCase) return;
        testSum-=a[j]; num--;

    }
}

main(){
        cin>>n>>sum; 
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            if(testCase) break;
            backTrack(1,1,i);
        }
        testCase?cout<<num:cout<<-1;
}