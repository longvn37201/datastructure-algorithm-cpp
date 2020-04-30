#include <iostream>
using namespace std;
int test = 1, a[100], n;
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

// 1234
// 1243 -- i=2; 1342 -- 1324
// 1324
// 1342  .
// 1423
// 1432
// 2134
void next()
{
    int i=n-1; 
    //tim i dau tien sao cho a(i)<a(i+1)
    while(a[i]>a[i+1]) i--;
    if(i){
        int j=n; 
		
        //tim j dau tien tu n qua tm a[j]>a[i]
        while(a[j]<a[i]) j--;
        int temp=a[i]; a[i]=a[j]; a[j]=temp;
		
        // lap nguoc doan a[i+1] den het
        int first=i+1, last=n; 
        while(first<last){
            int temp2=a[first]; a[first]=a[last]; a[last]=temp2;
        	first++;last--;
		}

    }
    else test=0;

}

main()
{
    cin >> n;
 	for(int i=1;i<=n;i++) a[i]=i;
    while (test)
    {
        in();
        next();
    }
}
