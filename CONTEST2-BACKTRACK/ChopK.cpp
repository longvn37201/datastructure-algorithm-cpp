#include <iostream>
int a[100]={0},n,k;

void output(){
    for(int i=1;i<=k;i++) std::cout<<a[i]; std::cout<<std::endl;
}

void backTrack(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i!=k)  backTrack(i+1);
        else output();
    }
}

main(){
    std::cin>>n>>k;
    backTrack(1);
}