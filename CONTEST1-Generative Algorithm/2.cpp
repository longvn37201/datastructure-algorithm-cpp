#include <iostream>
main(){
	int t; std::cin>>t;
	while(t--){
		int n,k; std::cin>>n>>k; 
		int a[k+1],run=k;
		for(int i=1;i<=k;++i) std::cin>>a[i];
		
		//tim i dau tien tu phai qua thoa man a[i]!=n-(k-i)
		while(a[run]==n-(k-run)) run--;
		
		// neu co thi gan tang dan tu a[i], neu khong thi gan bang cau hinh ban dau
		if(run){
			a[run]++;
			for(int i=run+1;i<=k;++i)
				a[i]=a[run]+i-run;
		} else for(int i=1;i<=k;i++) a[i]=i;
		
		//output
		for(int i=1;i<=k;i++) std::cout<<a[i]<<" "; 
		std::cout<<std::endl;
	}
}
