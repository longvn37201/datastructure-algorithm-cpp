#include <iostream>
using namespace std;
string s;
long long n,temp=1,l;
int main(){
    cin>>s>>n;
    l=s.length();
    for(temp=l;temp<=n;temp<<=1);
    temp>>=1;
    n-=1;
    while(temp>=l){
        if(n>=temp){
            n-=temp;
            if(n==0)n=temp-1;
            else n-=1;
        }
        temp>>=1;
    }
    cout<<s[n%l]<<endl;
    return 0;
}
