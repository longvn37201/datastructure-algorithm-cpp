
#include <bits/stdc++.h>
using namespace std;
main(){
    long long t; cin>>t;
    while(t--){
        long long s,t; cin>>s>>t;
        if(s>=t) cout<<s-t;
        else{
            long long count=0;
            while(s!=t){
                count++;
                if(t>s&&t%2!=0){
                    t++;
                } else if(t>s&&t%2==0) t/=2;
                else t++;
            }
            cout<<count;
            
        }

        cout<<endl;
    }
}