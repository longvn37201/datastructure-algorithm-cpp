#include <iostream>
using namespace std;
int n,a[15],check;

void output(){
    for(int i=1;i<=n;i++)cout<<a[i]; cout<<" ";
}

void nextPermutation(){
    int run=n-1;
    while(a[run]>a[run+1]){
        run--;
    }
    int run2=n;
    if(run){
        while(a[run2]<a[run]) run2--;
        int temp=a[run2]; a[run2]=a[run]; a[run]=temp;

        int F=run+1, L=n;
        while(F<L){
            temp=a[F];
            a[F]=a[L]; a[L]=temp; F++;L--;
        }
    }else check=0;
}
main(){
    int t;cin>>t;
    while (t--){
        check=1;
        cin>>n;
        for(int i=1;i<=n;i++)  a[i]=i;
        
        while(check){
            output();
            nextPermutation();
        }
        cout<<endl;
    }
}