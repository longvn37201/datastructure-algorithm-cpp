// #include <bits/stdc++.h>
// using namespace std;
// int x,n;


// main(){
//     int t; cin>>t;
//     while(t--){
//         cin>>x>>n;
//         if(n==1) cout<<1;
//         else{
//             int result=1;
//             for(int i=2;i<=n;i++){
//                 result=result*x+result;
//             }
//             cout<<result;
//         }
//         cout<<endl;
//     }
// }






#include <bits/stdc++.h>
using namespace std;
int x,n;


main(){
    int t; cin>>t;
    while(t--){
        cin>>x>>n;
        if(n==1) cout<<1;
        else{
            long long result=1;
            for(int i=2;i<=n;i++){
                result=result*x+result;
            }
            cout<<result;
        }
        cout<<endl;
    }
}