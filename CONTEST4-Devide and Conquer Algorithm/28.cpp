#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int result=n;
        for(int i=n/2;i>=1;i--)
        {
            if(a[i]*2<=a[result])	result--;
        }
        cout<<result<<endl;

    }
	return 0;
}



