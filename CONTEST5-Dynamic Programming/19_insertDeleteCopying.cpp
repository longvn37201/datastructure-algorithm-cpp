

#include <bits/stdc++.h>
using namespace std;

int f[101];

//Phep THuat
// i chan =>f[i]=min(f[i-1]+INSERT,f[i/2]+COPY)
// i le => f[i]=min(f[i-1]+INSERT,f[i+1/2]+COPY+DELETE)
// base case f[1]=INSERT
int minTime(int n,int INSERT,int DELETE,int COPY){
    if(n==1) return INSERT;
    f[1]=INSERT;
    for(int i=2;i<=n;i++){
        if(i%2==0)
            f[i]=min(
                    f[i-1]+INSERT,
                    f[i/2]+COPY
            );
        else
            f[i]=min(
                    f[i-1]+INSERT,
                    f[(i+1)/2]+COPY+DELETE
            );
        
    }
    return f[n];
}

main(){

    int t;cin>>t;
    while(t--){
        int n,INSERT,DELETE,COPY;cin>>n>>INSERT>>DELETE>>COPY;
        cout<<minTime(n,INSERT,DELETE,COPY)<<endl;
    }
}