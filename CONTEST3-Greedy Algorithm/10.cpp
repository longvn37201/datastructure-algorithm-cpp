#include <bits/stdc++.h>
using namespace std;

 
long long process(int a[],int n){

    // priority_queue: cau truc du lieu hang doi uu tien 
    priority_queue <int, vector<int>, greater<int>> queue(a,a+n);

        // // test priority_queue

        // while (!queue.empty()){ 
        //     cout << '\t' << queue.top(); 
        //     queue.pop(); 
        // } 
        // cout << '\n';
    
    long long result=0;
    while(queue.size()>1){
        int first=queue.top(); queue.pop(); result+=first;
        int second=queue.top(); queue.pop(); result+=second;
        queue.push(first+second);
    }
    return result;
}

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n]; for(int i=0;i<n;++i) cin>>a[i];
        cout<<process(a,n)<<endl;
    }
}





