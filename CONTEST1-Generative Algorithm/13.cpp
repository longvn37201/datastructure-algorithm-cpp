#include <iostream>
using namespace std;

string a,b[1000]; int check = 1,n,k,run=1;

//test thoa man duy nhat 1 day K so A
bool test(){
	int temp,count=0;;
	for(int i=1;i<=n;i++){
		temp=0;
		while(a[i]=='A'){
			temp++; i++;
			
		}
		if(temp==k)  count++;
	}
	if(count==1) return true; else return false;
}

//luu gia tri thoa man vao b[]
void write(){
    for(int i=1;i<=n;i++) b[run]+=a[i]; run++;
//    for(int i=1;i<=)
}

//sinh ke tiep
void next(){
    int i=n;
    while(i&&a[i]=='B'){
        a[i]='A';
        i--;
    }
    if(i>0) a[i]='B';
    else check=0;
}

main()
{
    cin>>n>>k; 
    
    //gan cau hinh dau
    for(int i=1;i<=n;i++) {
    	if(i==k+1) a[i]='B';
    	else a[i]='A';
	}
//	for(int i=1;i<=n;i++) cout<<a[i];
    
    // test true thi luu result vao mang B
    while (check)
    {
        if(test())
            write();
        next();
    }
    cout<<--run<<endl;
    for(int i=1;i<=run;i++) cout<<b[i]<<endl;
}
