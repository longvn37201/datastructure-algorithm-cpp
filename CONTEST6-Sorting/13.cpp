
#include <bits/stdc++.h> 
  
using namespace std; 
bool compare(int x,int y){
    return x>y;
}
int main() 
{ 
     int t; cin>>t;
    while(t--){
        int n,num,count=0; cin>>n>>num; int arr[n];for(int i=0;i<n;i++) {cin>>arr[i]; if(arr[i]==num) count++;}
        //  sort(arr,arr+n,compare);
       cout<< (!count? -1:count)<<endl;
    }
    return 0; 
} 