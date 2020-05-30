#include <bits/stdc++.h>
using namespace std;
string s;
main(){
    // 17-42
    deque<long long> q;
    long long t; cin>>t;
    while(t--){
        long long k; cin>>k;
        long long a[100]={0}; 
         cin>>s;
        for(long long i=0;i<s.size();i++){
            a[s[i]-'0']++;
        }
        // for(long long i=17;i<=42;i++){
        //     if(a[i]>0) cout<<a[i]<<"-"<<i<<" ";
        // }
        for(long long i=1;i<=k;i++){
            long long indexMax=17;
            long long MAX=a[indexMax];
            for(long long index=18;index<=42;index++){
                if(a[index]>=MAX){
                    indexMax=index;
                    MAX=a[indexMax];
                }
            }

            a[indexMax]--;
        }

        long long sum=0;
        for(long long i=17;i<=42;i++)
            // sum+=a[i]*a[i];
            sum+=a[i]*a[i];
        cout<<sum<<endl;
    }
}