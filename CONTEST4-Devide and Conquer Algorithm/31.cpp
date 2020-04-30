#include <bits/stdc++.h>
using namespace std;
#define matrix vector<vector<long long>>
#define MOD 1000000007

long long n,k;



matrix product2Matrix(matrix x, matrix y){
    matrix temp; temp.resize(n);
    for(int i=0;i<n;i++){
        temp[i].resize(n);
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                temp[i][j]=(temp[i][j]%MOD+((x[i][k]%MOD)*(y[k][j]%MOD))%MOD)%MOD;
            }
        }
    }
    return temp;
}

matrix power(matrix matrixInput,long long n){
    if(n==1) return matrixInput;
    matrix temp=power(matrixInput,n/2);
    if(n%2==0) return product2Matrix(temp,temp);
    else return product2Matrix(product2Matrix(temp,temp),matrixInput);
}


 main() {
   int t;cin>>t;
   while(t--){
       cin>>n>>k;
        matrix matrixInput;
        matrixInput.resize(n);
        for(int i=0;i<n;i++) { 
            matrixInput[i].resize(n);
            for(int j=0;j<n;j++) {cin>>matrixInput[i][j];}
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++) cout<<matrixInput[i][j]<<" ";
        //     cout<<endl;
        // }
        matrix result=power(matrixInput,k);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<result[i][j]<<" ";
            cout<<endl;
        }
   }
}