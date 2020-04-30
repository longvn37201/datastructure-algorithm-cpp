#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[500];

// bool khongCoTrongA(int test){
//     for(int i=0;i<n;i++){
//         if(a[i]==test) return false;
//     }
//     return true;
// }

bool laCapSoCong(int test){
    for(int i=0;i<n;i++){
        if(a[i]%test!=0)  return false;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long MIN=10000000000,MAX=-1999;
         cin>>n;  for(int i=0;i<n;i++) {cin>>a[i];
         if(a[i]<MIN) MIN=a[i]; if(a[i]>MAX)MAX=a[i];
         }
        //update
        //  sort(a,a+n); MIN=a[0];MAX=a[n-1];
        if(MAX%MIN!=0){
            int count=MAX-n;
            //update
            // for(int i=1;i<=MAX;i++){
            //     if(khongCoTrongA(i)) count++;
            // }
            if(count%2!=0) cout<<"Lema";
            else cout<<"Bi";
        }else{
            if(laCapSoCong(MIN)){
                int count=(MAX/MIN)-n;
                //update
                // for(int i=MIN;i<=MAX;i+=MIN){
                //     if(khongCoTrongA(i)) count++;
                // }
                if(count!=0&&count%2!=0) cout<<"Lema";
                else cout<<"Bi";

            }else{
                int count=MAX-n;
                //update
                // for(int i=1;i<=MAX;i++){
                //     if(khongCoTrongA(i)) count++;
                // }
                if(count%2!=0) cout<<"Lema";
                else cout<<"Bi";
            }
        }
        cout<<endl;
    }
}
