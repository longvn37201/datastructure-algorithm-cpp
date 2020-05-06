

#include <bits/stdc++.h>
using namespace std;

long long result[1001];


//base case i=1, result[i]=1;
// i>1, result[i]= min(mtp2,mtp3,mtp5)
// update multiple...

long long ugly(int n){
    result[1]=1;
    long long multipleOf2=2,multipleOf3=3,multipleOf5=5;
    int index2=1,index3=1,index5=1;

    int run=2;
    while(run<=n){
        long long temp=min(
            min(multipleOf2,multipleOf3),
            multipleOf5
        );
        result[run++]=temp;
        if(temp==multipleOf2) {multipleOf2=result[++index2]*2;}
        if(temp==multipleOf3) {multipleOf3=result[++index3]*3;}
        if(temp==multipleOf5) {multipleOf5=result[++index5]*5;}
    }

    return result[n];
}

main(){
    int t;cin>>t;
    while(t--){
        int n; 
        //test
        // for(int n=1;n<=100;n++)
        cin>>n;
        cout<<ugly(n)<<endl;
    }
}
