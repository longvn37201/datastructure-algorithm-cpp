
#include <bits/stdc++.h> 
  
using namespace std; 
bool compare(int x,int y){
    return x>y;
}
int main() 
{ 
     int t; cin>>t;
    while(t--){
        int n,num; cin>>n>>num; int arr[n];for(int i=0;i<n;i++) cin>>arr[i];
         sort(arr,arr+n,compare);
         for(int i=0;i<num;i++){
             cout<<arr[i]<<" ";
         }
         cout <<endl;
    }
    return 0; 
} 