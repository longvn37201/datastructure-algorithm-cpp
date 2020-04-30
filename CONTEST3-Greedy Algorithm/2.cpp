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