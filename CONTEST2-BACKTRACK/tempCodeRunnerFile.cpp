#include<bits/stdc++.h>
#define maxn 35
using namespace std;
long long n;
char a[maxn];
int main(){
	char x;
	long long tot=0;
	scanf("%c",&x);
	while(x!=' '){
		a[++tot]=x;
		scanf("%c",&x);
	}
	scanf("%lld",&n);
	long long k=n;
	while(k>tot){
		long long j=tot;
		while(j<k)j=j*2;
		j=j/2;
		if (k%j==1) k=k-1;
		else k=k-j-1;
	}
	printf("%c\n",a[k]);
	return 0;
}