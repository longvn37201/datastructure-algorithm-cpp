

#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;

// bang phuong an QHD, luu cac bai toan con da giai quyet
long long table[101][901];

long long something(int n,int sum){
    if(n==0) return sum==0;

    //neu bai toan con da giai va luu trong bang phuong an thi return res luon
    if(table[n][sum]!=INT_MIN) return table[n][sum];

    long long res=0;
    for(int i=0;i<=9;i++){
        if(sum-i>=0){
            res+=something(n-1,sum-i); res%=MOD;
        }
    }

    //update bang phuong an sau moi bai toan con
    table[n][sum]=res;
    return res;
}

long long result(int n,int sum){
    if(sum>n*9) return 0;

    long long res=0;
    //chu so dau tien khac 0, moi chu so dau tien thi dequy tim so cach tao cac cs tiep theo
    for(int i=1;i<=9;i++){
        if(sum-i>=0){
            res+=something(n-1,sum-i); res%=MOD;
        }
    }
    return res;
}

main(){
    for(int i=0;i<=100;i++) for(int j=0;j<=900;j++) table[i][j]=INT_MIN;
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<result(n,k)<<endl;
    }
}