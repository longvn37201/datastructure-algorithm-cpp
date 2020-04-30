#include <bits/stdc++.h> 
using namespace std; 

void something(int sum,int n){
    int result[n]; result[0]=1; sum-=1;
    for(int i=n-1;i>0;i--){
        if(sum>9) result[i]=9; 
        else result[i]=sum;
        sum-=result[i];
    }
    for(int i=0;i<n;i++) cout<<result[i];
}

int main() 
{ 
    int t; cin>>t;
    while(t--){
        int sum,n;cin>>sum>>n;
        if(n*9<sum) cout<<-1;
        else something(sum,n);
        cout<<endl;
    }
        
} 