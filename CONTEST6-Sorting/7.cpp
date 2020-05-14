#include<bits/stdc++.h>
using namespace std;
int lenA, a0[2000000],a1[2000000],a2[2000000];
// int hop[100000], giao[100000];

int main(){
    int t; cin>>t;
    while(t--){
        // int index0=0,index1=0,index2=0;
        cin>>lenA;
        for(int i=0;i<lenA;i++) { 
            cin>>a0[i];
            a1[i]=a0[i];
        }
        sort(a1,a1+lenA);
        int l=0,r=lenA-1;
        while(a0[l]==a1[l])
            l++;
        while(a0[r]==a1[r])
            r--;
        cout<<++l<<" "<<++r;
		cout <<endl;
    }
}