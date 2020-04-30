// #include<bits/stdc++.h>
// using namespace std;


// main(){
//     int  n; cin>>n;
//     int  a[n]; for(int  i=0;i<n;i++) cin>>a[i];
//     sort(a,a+n);
//     // for(int  i=0;i<n;i++) cout<<a[i];
//     int  result=1;
//     for(int  i=2;i<=a[0];i++) {
        
//         int  temp=0;
//         for(int  j=0;j<n;j++) if(a[j]%i==0) temp++;
//         // cout<<temp<<" ds";
//         if(temp==n) result++;
//     }
//     cout<<result;
// }

// #include<bits/stdc++.h>?
#include <iostream>
using namespace std;

int gcd(int  a, int  b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

main(){
    int  n; cin>>n;
    int  a[n]; for(int  i=0;i<n;i++) cin>>a[i];
    // sort(a,a+n);
    // for(int  i=0;i<n;i++) cout<<a[i];
    // int  result=1;
    // for(int  i=2;i<=a[0];i++) {
        
    //     int  temp=0;
    //     for(int  j=0;j<n;j++) if(a[j]%i==0) temp++;
    //     // cout<<temp<<" ds";
    //     if(temp==n) result++;
    // }
    // cout<<result;
    // int  temp=0;
    if(n==1)cout<<a[0];
    else{
        int  temp=gcd(a[0],a[1]);
        for(int  i=2;i<n;i++){
            temp=gcd(temp,a[i]);
        }
        cout<<temp;

    }
}