#include <iostream>
#include <algorithm>
using namespace std;
int matrix[20][20],markY[20]={0},n,k,OK,testCase, result[50],index;

void nextPermutation(){
    int i=n-1;
    while(markY[i]>markY[i+1]&&i>0){
        i--;
    }
    if(!i) {
		OK=1; 
	}else{
	    int j=n;
	    while(markY[j]<markY[i]) j--;
	    swap(markY[i],markY[j]);
	    int F=i+1,L=n;
	    while(F<L){
	        swap(markY[F],markY[L]); F++;L--;
	    }
	}
}

void test(){
    int temp=0;
    for(int i=1;i<=n;i++) temp+=matrix[i][markY[i]];
    if(temp==k){
    	testCase++;
    	for(int i=1;i<=n;i++) result[index++]=markY[i];
	}
}

void output(){
	cout<<testCase<<endl;
	if(testCase)
	for(int i=1;i<index;i++) {
		cout<<result[i]<<" "; if(i%n==0) cout<<endl;
	}
}
main(){
    
    
        cin>>n>>k; for(int i=1;i<=n;i++) {markY[i]=i; for(int j=1;j<=n;j++) cin>>matrix[i][j];}
        OK=0;testCase=0;index=1;
        while(!OK){
            test();
            nextPermutation();
        }
        output();
    
}
