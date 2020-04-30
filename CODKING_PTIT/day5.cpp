#include <bits/stdc++.h>
using namespace std;
long long n;
// long long b[100000001],dem=0;
// chợ 2, trường học3, công viên 4, nha 1


//update
// void in(){
//     for(long long i=1;i<n;i++){
//         if(b[i]==1) cout<<"nha"<<"-";
//         if(b[i]==2) cout<<"cho"<<"-";
//         if(b[i]==3) cout<<"truong"<<"-";
//         if(b[i]==4) cout<<"cv"<<"-";
//         // cout<<b[i]<<"-";
//     }
// }

// long long backTrack(long long i){
//     // if(i==1||i==n-1){
//         for(long long j=1;j<=4;j++){
//             // if(j!=b[i-1]) b[i]=j;
//             // else continue;
//             if(  ((i==1||i==n-1)&&j==1)||b[i-1]==j   ) continue;
//             else b[i]=j;
//             if(i==n-1){ 
//                dem=(dem+1) ;  
//             }else backTrack(i+1);
//             // b[i]=0;
//         }
//     // }
//     // else {
//     //     for(long long j=1;j<=4;j++){
//     //         if(j!=b[i-1]) b[i]=j;
//     //         else continue;
//     //         if(i<n-1) backTrack(i+1);
//     //         // b[i]=0;
//     //     }
//     // }
// }

int main(){
    cin>>n;
    // backTrack(1);
    // cout<<dem;
    long long result=3;
    // if(n==1) cout<<0;
    if(n==2) cout<<result;
    else{
        for(int i=3;i<=n;i++){
            if(i%2!=0){
                result=(result*3-3)%1000000007 ;
            }else result=(result*3+3)%1000000007 ;

        }
        cout<<result;
    } 
}    
