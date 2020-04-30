
// #include <bits/stdc++.h>
// using namespace std;
// int run, testCase = 0;
// int a[1000000], b[1000000] = {0};
// int n;

// int uc(int x,int y){
//     if(y==0) return x;
//     return uc(y,x%y);
// }

// bool check(){
//     int test=uc(a[b[1]],a[b[2]]);
//     for(int i=3;i<=run;i++){
//         test=uc(test,a[b[i]]);
//     }
//     if(test!=1) return true;
//     return false;
// }

// void backTrack(int i){
//     if(testCase) return;
//     for(int j=b[i-1]+1;j<=n-run+i;j++){
//         if(testCase) return;
//         b[i]=j;        
//         if(i==run){
//             if(check()) testCase++;
//             // for(int k=1;k<=run;k++) cout<<a[b[k]];cout<<endl;
//         }else backTrack(i+1);
//     }
// }

// main()
// {
//     cin >> n; b[0]=0;
//     for (int f = 1; f <= n; f++)
//         cin >> a[f];
//     for (run = n; run >= 2; run--)
//     {
//         backTrack(1);
//         if (testCase)
//         {
//             cout << run;
//             break;
//         }
//     }
//     if (testCase == 0)
//         cout << 1;
// }


// solotion 2
#include<bits/stdc++.h> 
  
using namespace std; 
  
#define MAX 100001 
  
int prime[MAX], countdiv[MAX]; 

int largestGCDSubsequence2(int arr[], int n) 
{ 
    int ans = 0; 
  
    // Finding the Maximum value in arr[] 
    int maxele = *max_element(arr, arr+n); 
  
    // Iterate from 2 to maximum possible 
    // divisor of all give values 
    for (int i=2; i<=maxele; ++i) 
    { 
        int count = 0; 
        for (int j=0; j<n; ++j) 
        { 
            // If we found divisor, 
            // increment count 
            if (arr[j]%i == 0) 
                ++count; 
        } 
        ans = max(ans, count); 
    } 
  
    return ans; 
} 

void SieveOfEratosthenes() 
{ 
    for (int i = 2; i * i <= MAX; ++i) 
    { 
        if (!prime[i]) 
            for (int j = i * 2; j <= MAX; j += i) 
                prime[j] = i; 
    } 
  
    for (int i = 1; i < MAX; ++i) 
        if (!prime[i]) 
            prime[i] = i; 
} 
int largestGCDSubsequence(int arr[], int n) 
{ 
    int ans = 0; 
    for (int i=0; i < n; ++i) 
    { 
        int element = arr[i]; 
  
        while (element > 1) 
        { 
            int div = prime[element]; 
  
            ++countdiv[div]; 
  
            ans = max(ans, countdiv[div]); 
  
            while (element % div==0) 
                element /= div; 
        } 
    } 
  
    return ans; 
} 
  
int uc(int x,int y){
    if(y==0) return x;
    return uc(y,x%y);
}

int main() 
{ 
  int n; cin>>n; int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
  if(n==1) cout<<1;
  if(n==2) {if(uc(arr[0],arr[1])!=1) cout<<2; else cout<<1;}
  if(n>2&&n<=1000){
      cout << largestGCDSubsequence2(arr, n); 
  }
  if(n>1000)  {
    SieveOfEratosthenes(); 
    cout << largestGCDSubsequence(arr, n); 
  }
    return 0; 
} 



//solution 3
// #include<bits/stdc++.h> 
  
// using namespace std; 
  
// // Returns length of the largest subsequence 
// // with GCD more than 1. 
// int largestGCDSubsequence(int arr[], int n) 
// { 
//     int ans = 0; 
  
//     // Finding the Maximum value in arr[] 
//     int maxele = *max_element(arr, arr+n); 
  
//     // Iterate from 2 to maximum possible 
//     // divisor of all give values 
//     for (int i=2; i<=maxele; ++i) 
//     { 
//         int count = 0; 
//         for (int j=0; j<n; ++j) 
//         { 
//             // If we found divisor, 
//             // increment count 
//             if (arr[j]%i == 0) 
//                 ++count; 
//         } 
//         ans = max(ans, count); 
//     } 
  
//     return ans; 
// } 
  
// // Driver code 
// int main() 
// { 
//     int n; cin>>n; int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
//     cout << largestGCDSubsequence(arr, n); 
//     return 0; 
// } 