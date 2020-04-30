#include <iostream>
main(){
    std::string s; int t; 
	std::cin>>t;
    while(t--){
       std::cin>>s;
        int run=s.length()-1;
        while(s[run]=='1'){
            s[run]='0';
            run--;
        }
        if(run>=0) s[run]='1';
        
    std::cout<<s<<std::endl;
    }
}
