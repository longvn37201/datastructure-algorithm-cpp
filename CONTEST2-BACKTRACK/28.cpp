//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n,sum,a[50],testCase;
//int b[50],temp;
//
//void output(){
//    testCase++;
//    cout<<"[";
//    for(int i=1;i<temp;i++) {cout<<b[i]; if(i<temp-1) cout<<" ";}
//    cout<<"] ";
//
//}
//
//void backTrack(int i,int sum){
//    if(i<=n&&sum==0) output();
//    while(i<=n&&sum-a[i]>=0){
//        b[temp]=a[i]; temp++;
//
//        backTrack(i,sum-a[i]);
//        i++; temp--;
//    }
//}
//
//main(){
//    int t;cin>>t;
//    while(t--){
//        testCase=0; temp=1;
//        cin>>n>>sum; for(int i=1;i<=n;i++) cin>>a[i];
//        for(int i=1;i<n;i++){
//            for(int j=i+1;j<=n;j++)
//                if(a[i]==a[j]){
//                    swap(a[j],a[n]); --n;
//                }
//        }
//        sort(a+1,a+n+1);
//        if(sum<a[1]);
//        else{
//            // masumSize=sum/a[1];
//            backTrack(1,sum);
//
//        }
//        if(!testCase) cout<<-1;
//        cout<<endl;
//    }
//}



#include <bits/stdc++.h>
using namespace std;
int n,sum,co;
void output(vector<int> res){
    vector<int> temp=res;
    sort(temp.begin(),temp.end());
    cout<<"[";
    for(int i=0;i<res.size();i++){
//        if(i!=res.size()-1)
            cout<<temp[i]<<" ";
//        else
//            cout<<temp[i]<<"]"<<" ";
    }
    cout<<"] ";
}
void quaylui(int i,int a[],vector<int> res, int test){
    if(test==sum) {output(res);co=1;}
    for(int j=i;j<=n;j++){
        if(test+a[j]<=sum){
            res.push_back(a[j]);
            quaylui(j,a,res,test+a[j]);
            res.pop_back();
        }
    }
}
main(){
    int t;cin>>t;while(t--){
        cin>>n>>sum; int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
//        sort(a+1,a+n+1);
        co=0;
        vector<int> res;
        quaylui(1,a,res,0);
        if(co==0) cout<<-1;
        cout<<endl;
    }
}
