#include <iostream>
#include <algorithm>
#include <string>
using namespace std; 
string s; int index;

void hoanVi(){
    int i=s.length()-2;
    while(i>=0&&s[i]>=s[i+1]) i--;
    
	if(i>=0){
        int j=s.length()-1;
        while(s[j]<=s[i]) j--;
		swap(s[i],s[j]);
        	
        int F=i+1,L=s.length()-1;
        while(F<L){
           swap(s[F],s[L]); F++,L--;
        }
        cout<<s<<endl;
    } else cout<<"BIGGEST"<<endl;
    
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>index; cin>>s;
        cout<<index<<" ";
        hoanVi();
    }
    
}
