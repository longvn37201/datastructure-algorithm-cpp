



#include <iostream>
using namespace std;

//b[] mark 1,2,3...k chia thanh k tap con cua n
//testCase= co the chia?
int a[50],visited[50], n, k, sum,testCase;

void fuckingServer(int soTap,int testSum){

    if(soTap==k-1) testCase++;

    if(testCase) return;

    for(int j=1;j<=n;j++){
        if(!visited[j]){
            testSum+=a[j];
            visited[j]=1;
            if(testSum==sum) {soTap++;testSum=0;}
            if(testSum<sum) fuckingServer(soTap,testSum);
            testSum-=a[j]; visited[j]=0;
        }


    }


}

main(){
    int t;
    cin >> t;
    while (t--) {
        testCase = 0;sum=0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {cin >> a[i]; visited[i]=0; sum+=a[i];}
        if(k>n);
        else if(sum%k!=0);
            else{
                    sum/=k;
                    fuckingServer(0,0);
            }

        testCase? cout<<1: cout<<0; cout<<endl;
    }
}
