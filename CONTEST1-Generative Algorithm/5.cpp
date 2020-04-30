#include <iostream> 
using namespace std;
int a[20],n,k,check;

void output(){
    for(int i=1;i<=k;++i) cout<<a[i]; cout<<" ";
}

void nextCombination(){
    int run=k;
    while(a[run]==n-(k-run)){
        run--;
    }
    if(run){
        a[run]++;
        for(int i=run+1;i<=k;i++) a[i]=a[run]+i-run;
    } 
    else check=0;
}

main(){
    int t;cin>>t;
    while(t--){
        check=1;
        cin>>n>>k; 
        for(int i=1;i<=k;i++) a[i]=i;
        while(check){
            output();
            nextCombination();
        }
        cout<<endl;
    }
}