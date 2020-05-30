#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        queue<int> myQueue;
        for(int i=1;i<=n;i++){
            int temp; cin>>temp;
            if(temp==1) cout<<myQueue.size()<<endl;
            if(temp==2){
                if(myQueue.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            if(temp==3){
                int temp2; cin>>temp2;
                myQueue.push(temp2);
            }
            if(temp==4){
                if(myQueue.empty());
                else myQueue.pop();
            }
            if(temp==5){
                if(myQueue.empty()) cout<<-1<<endl;
                else cout<<myQueue.front()<<endl;
            }
            if(temp==6){
                 if(myQueue.empty()) cout<<-1<<endl;
                else cout<<myQueue.back()<<endl;
            }
        }
    }
}