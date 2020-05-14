#include<bits/stdc++.h>
using namespace std;
int sum,lenA, a[2000000],a1[2000000],a2[2000000];
// int hop[100000], giao[100000];

int main(){
    int t; cin>>t;
    while(t--){
        // int index0=0,index1=0,index2=0;
        cin>>lenA>>sum;
        for(int i=0;i<lenA;i++) { 
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<lenA-1;i++){
            for(int j=i+1;j<lenA;j++){
                if(a[i]+a[j]==sum) count++;
            }
        }

		cout <<count<<endl;
    }
}