#include <iostream>
int a[50],n;
void output(){
    for(int i=1;i<=n;i++) std::cout<<a[i];std::cout<<std::endl;
}
void backTrack(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i!=n) backTrack(i+1);
        else output();
    }

}
main(){
   std::cin>>n;
   backTrack(1); 
}