#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];

//29
int main(){
    // long long t; cin>>t;
    // while(t--){
        // long long mark;
        cin>>len; for(int i=0;i<len;i++){
            cin>>a[i];
        }
        bool falsE=true; int step=1;
        while(falsE){
            int count=0;
            for(int i=1;i<len;i++){
                if(a[i]<a[i-1]) {swap(a[i],a[i-1]);
                count++;}
            }
            if(count==0) falsE=false;
            else{
                 cout<<"Buoc "<<step++<<": ";
                for(int j=0;j<len;j++) cout<<a[j]<<" ";
                cout<<endl;
            }
        }

        
        // for(int i=0;i<len;i++){
        //     cout<<"Buoc "<<i<<": ";
        //     sort(a,a+i+1);
        //     for(int j=0;j<=i;j++){
        //         cout<<a[j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<mark<<endl;
    // }
}