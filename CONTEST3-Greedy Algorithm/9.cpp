#include <bits/stdc++.h>
using namespace std;

 

main(){
    int t; cin>>t;
    while(t--){
        int testCase=0;
        int n;cin>>n;
        int dead[n],profit[n],index;
        for(int i=0;i<n;i++)
            cin>>index>>dead[i]>>profit[i];

        // sort theo profit decreasing
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(profit[i]<profit[j]){
                    swap(dead[i],dead[j]); swap(profit[i],profit[j]);
                }

        //visited check slot job, result luu profit 
        bool visited[n]={false};
        int sumProfit=0;
        //do uu tien slot job gan deadline nhat
        for(int i=0;i<n;i++)
            for(int j=min(n,dead[i])-1;j>=0;j--)
                if(!visited[j]){
                     sumProfit+=profit[i]; visited[j]=true; testCase++; break;
                }
        
        //printf
        cout<<testCase<<" "<<sumProfit<<endl;
                
    }
}