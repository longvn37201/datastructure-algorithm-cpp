#include<bits/stdc++.h>
using namespace std;
long long len,num, a[1000005];


int main(){
    long long t; cin>>t;
    while(t--){
        long long MIN=INT_MAX,MIN2=INT_MAX;
        cin>>len; for(int i=1;i<=len;i++){
            long long temp; cin>>temp; 

            long long prevMIN=MIN;
            MIN=min(MIN,temp);
            if(i==1) MIN2=temp;
            else {
                if(prevMIN!=MIN) MIN2=prevMIN;
                else MIN2=min(MIN2,temp);
            }
        }
        if(MIN==MIN2) cout<<-1<<endl;
        else
        cout<<MIN<<" "<<MIN2<<endl;
    }
}