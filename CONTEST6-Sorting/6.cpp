#include<bits/stdc++.h>
using namespace std;
int lenA, a0[200000],a1[200000],a2[200000];
// int hop[100000], giao[100000];

int main(){
    int t; cin>>t;
    while(t--){
        int index0=0,index1=0,index2=0;
        cin>>lenA;
        for(int i=0;i<lenA;i++) {int temp; cin>>temp;
            switch(temp){
                case 0: a0[index0++]=temp; break;
                case 1: a1[index1++]=temp; break;
                case 2: a2[index2++]=temp; break;
                
                
            }
        }
        for(int i=0;i<index0;i++) cout<<a0[i]<<" ";
        for(int i=0;i<index1;i++) cout<<a1[i]<<" ";
        for(int i=0;i<index2;i++) cout<<a2[i]<<" ";
		cout <<endl;
    }
}