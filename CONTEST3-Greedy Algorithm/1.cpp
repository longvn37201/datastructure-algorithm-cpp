#include <bits/stdc++.h>
using namespace std;
int n,
a[10]={1,2,5,10,20,50,100,200,500,1000},
num;

void greedy(int i){
    while(a[i]>n) i--;
    n-=a[i]; num++;
    if(!n) return;
    else greedy(i);
}

main(){
    int t; cin>>t;
    while(t--){
        num=0;
        cin>>n;
        greedy(9);
        cout<<num<<endl;
    }
}