#include <iostream>
using namespace std;
int n,check,a[20];

void out(){
    for(int i=1;i<=n;i++) cout<<a[i];cout<<" ";
}
void next(){
    int run=n-1;
    while(run&&a[run] <a[run+1]) run--;
    if(run){
        int run2=n; 
        while(a[run2]>a[run]) run2--;
        int temp=a[run2]; a[run2]=a[run];a[run]=temp;
        int f=run+1,l=n;
        while(f<l){
            temp=a[f];a[f]=a[l];a[l]=temp;f++;l--;
        }

    } else check=0;
}
main(){
    int t;cin>>t;
    while(t--){
        check=1;
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=n-i+1;
        while(check){
            out();
            next();
        }
        cout<<endl;
    }
}