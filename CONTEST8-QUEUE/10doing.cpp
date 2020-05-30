
// #include <bits/stdc++.h>
// // #define int long long
// using namespace std;

// bool nguyenTo(int n){
//     if(n==2) return 1;
//     else{
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0) return 0;
//         }
//         return 1;
        
//     }
// }

// main(){
//     // int i=sqrt(10); cout<<i;
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         int count=0;
//         while(n>1){
//             count++;

//             if(nguyenTo(n)) n--;
//             else{
//                 // int temp=0;
//                 int sq=sqrt(n);
//                 for(int i=sq;i>=2;i--){
//                     if(n%i==0) {n/=i;  break;}
//                 }
//                 // if(temp==0) n--;

//             }
//         }
        
//         cout<<count<<" ";
//     }
// }

// // 80 
// // 2 5 


//Minimum step to reach one
//Solution using dynamic programming
#include <stdio.h>
#include <math.h>

int findMin(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
// Driver code
int main()
{
	int n=50,biggerDivisor=0;
	int arr[n+1];
	int sqrtTemp;
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
	for(int i=3;i<=n;i++){
	    sqrtTemp=(int)sqrt(i);
	    biggerDivisor=0;
	    for(int j=2; j<sqrtTemp+1; j++){
	        if(i%j==0){
	            if(biggerDivisor==0){
	                biggerDivisor=i/j;
	            }else{
	                if(arr[i/j]<arr[biggerDivisor]){
	                    biggerDivisor=i/j;
	                }
	            }
	        }
	        
	    }
	    if(biggerDivisor>0){
	        arr[i]=findMin  (arr[i-1],arr[biggerDivisor])+1;
	    }else{
	        arr[i]=arr[i-1]+1;
	    }
	}
	printf("%d",arr[n]);
	return arr[n];
}
