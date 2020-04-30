#include <iostream>
using namespace std;
int a[100] = {0}, test = 1, n,k;

bool kBit(){
    int count=0;
    for(int i=1;i<=n;i++) if(a[i]==1) count++;
    if(count==k) return true; else return false;
}

void out(){
    for(int i=1;i<=n;i++) cout<<a[i]; cout<<endl;
}

void next(){
    int i=n;
    while(i&&a[i]){
        a[i]=0;
        i--;
    }
    if(i>0) a[i]=1;
    else test=0;
}

main()
{
    int t;cin >> t;
    while(t--){
        cin>>n>>k; test=1;
        while (test)
        {
            if(kBit()) out();
            next();
        }
    }
    
}
