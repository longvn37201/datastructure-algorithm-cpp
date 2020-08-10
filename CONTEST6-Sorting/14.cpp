
#include <bits/stdc++.h> 
  
using namespace std; 

bool prime(int n){
    if(n==2) return true;
    if(n==3) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() 
{ 
     int t; cin>>t;
    while(t--){
        bool test=false;
        int n; cin>>n;
        for(int i=2;i*i<=n;i++){
            if(prime(i)&&prime(n-i)) {
                test=true;
                cout<<i<<" "<<n-i;
                break;
            }
        }
        if(!test) cout<<-1;
        cout<<endl;
    }
} 