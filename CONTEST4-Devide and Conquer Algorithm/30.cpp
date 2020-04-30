#include <bits/stdc++.h>
using namespace std;
#define matrix vector<vector<long long>>
#define MOD 1000000007
long long n;

matrix a={{1,1},{1,0}};


matrix product2Matrix(matrix x, matrix y){
    matrix temp={{0,0},{0,0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                temp[i][j]=(temp[i][j]+(x[i][k]*y[k][j])%MOD)%MOD;
            }
        }
    }
    return temp;
}

matrix power(long long n){
    if(n==1) return a;
    matrix temp=power(n/2);
    if(n%2==0) return product2Matrix(temp,temp);
    else return product2Matrix(product2Matrix(temp,temp),a);
}


int main() {
   int t;cin>>t;
   while(t--){
       cin>>n;
        matrix result=power(n);
       cout<<result[0][1]<<endl;
   }
}