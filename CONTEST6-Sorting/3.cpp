  
#include<bits/stdc++.h> 
using namespace std; 
  
int countSwap(int a[] , int n) 
{ 
    vector<pair<int,int>> vec(n); 
      
    for(int i=0;i<n;i++) 
    { 
        vec[i].first=a[i]; 
        vec[i].second=i; 
    } 
  
    sort(vec.begin(),vec.end()); 
  
    int ans=0; 
  
    for(int i=0;i<n;i++) 
    {    
       while(i!=vec[i].second)
        { 
            swap(vec[i],vec[vec[i].second]);
            ans++;
        }  
          
    } 
  
    return ans; 
} 
  
int main() 
{ 
      int t;cin>>t;
      while(t--){
            int n ; cin>>n;
            int a[n]; for(int i=0;i<n;i++) cin>>a[i];
            cout<<countSwap(a,n)<<endl; 
      }
    
      
    return 0; 
}  