#include <bits/stdc++.h>
#include <string>
using namespace std;

string result;

void recursion(long long P,long long Q){
    // cout<<P<<"-"<<Q<<endl;
    if(Q%P==0)
        result+="1/"+to_string(Q/P);
    else{
        long long mauSoChung=Q/P+1;
        result+="1/"+to_string(mauSoChung)+" + ";
        recursion(P*mauSoChung-Q,Q*mauSoChung);
    }
}

main(){
    int t; cin>>t;
    while(t--){
        result="";
        long long P,Q; cin>>P>>Q;
        recursion(P,Q);
        cout<<result<<endl;
    }
}
