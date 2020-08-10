#include <bits/stdc++.h>
using namespace std;

int MIN(string a,string b){
   for(int i=0;i<a.length();i++)
       if(a[i]=='6') a[i]='5';
   for(int i=0;i<b.length();i++)
       if(b[i]=='6') b[i]='5';
   return stoi(a)+stoi(b);
}

int MAX(string a, string b){
    for(int i=0;i<a.length();i++)
       if(a[i]=='5') a[i]='6';
   for(int i=0;i<b.length();i++)
       if(b[i]=='5') b[i]='6';
   return stoi(a)+stoi(b);
}

main(){
   string a,b;
   cin>>a>>b;
   cout<<MIN(a,b)<<" "<<MAX(a,b);
}

// int MIN(int a,int b){
//     int arr[10],brr[10],run=0,run2=0;
//     while(a){
//         int temp=a%10;
//         if(temp==6)
//         arr[run++]=5;
//         else arr[run++]=temp;
//         a/=10;
//     }
//     while(b){
//         int temp=b%10;
//         if(temp==6)
//         brr[run2++]=5;
//         else brr[run2++]=temp;
//         b/=10;
//     }
//     int strA=0,strB=0;
//     for(int i=run-1;i>=0;i--){
//         strA*=10;strA+=arr[i];
//     }
//     for(int i=run2-1;i>=0;i--){
//         strB*=10;strB+=brr[i];
//     }
//     return strA+strB;
// }
// int MAX(int a,int b){
//     int arr[10],brr[10],run=0,run2=0;
//     while(a){
//         int temp=a%10;
//         if(temp==5)
//         arr[run++]=6;
//         else arr[run++]=temp;
//         a/=10;
//     }
//     while(b){
//         int temp=b%10;
//         if(temp==5)
//         brr[run2++]=6;
//         else brr[run2++]=temp;
//         b/=10;
//     }
//     int strA=0,strB=0;
//     for(int i=run-1;i>=0;i--){
//         strA*=10;strA+=arr[i];
//     }
//     for(int i=run2-1;i>=0;i--){
//         strB*=10;strB+=brr[i];
//     }
//     return strA+strB;
// }

// main(){
//     int a,b;cin>>a>>b;
//     cout<<MIN(a,b)<<" "<<MAX(a,b);
// }
