#include<bits/stdc++.h>
using namespace std;
int lenA,lenB, a[200000];
// int hop[100000], giao[100000];

int main(){
    int t; cin>>t;
    while(t--){
        cin>>lenA>>lenB;
        for(int i=0;i<lenA+lenB;i++) cin>>a[i];
        sort(a,a+lenA+lenB);
        cout<<a[0]<<" ";
        for(int i=1;i<lenA+lenB;i++) if(a[i]!=a[i-1]) cout<<a[i]<<" ";
        cout<<endl;
        for(int i=1;i<lenA+lenB;i++) if(a[i]==a[i-1]) cout<<a[i]<<" ";
		cout <<endl;
    }
}