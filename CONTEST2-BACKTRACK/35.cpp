#include <iostream>
using namespace std;
int n,k,s,sum,testCase;

bool check(){
    return sum==s;
    
}

void callback(int i,int j){
    for(int l=j+1;l<=n;l++){
        sum+=l;
        if(i==k){
            if(check()) testCase++;
        }else callback(i+1,l);
        sum-=l;
    }
}

main(){
    int t=100;
    while(t--){
        cin>>n>>k>>s;
        if(!n&&!k&&!s) break;
        else{
            sum=0; testCase=0;
            callback(1,0);
            cout<<testCase<<endl;
        }

    }
}