#include <bits/stdc++.h>
using namespace std;

 
long long process(long long a[],long long n){

    // priority_queue: cau truc du lieu hang doi uu tien 
    priority_queue <long long, vector<long long>, greater<long long>> queue(a,a+n);
        
        // // test priority_queue

        // while (!queue.empty()){ 
        //     cout << '\t' << queue.top(); 
        //     queue.pop(); 
        // } 
    
    long long result=0;
    while(queue.size()>1){
        long long first=queue.top(); queue.pop();
        long long second=queue.top(); queue.pop(); 
        result=result%1000000007;
        result= result+ (first%1000000007+second%1000000007)%1000000007; 
        result=result%1000000007;
        queue.push((first%1000000007+second%1000000007)%1000000007);
    }
    return result;
}

main(){
        long long n; cin>>n; long long a[n]; for(long long i=0;i<n;++i) cin>>a[i];
        cout<<process(a,n);
}





