#include <iostream>
using namespace std;
int a[100], test = 1, n,k;
void out(){
    for(int i=1;i<=k;i++) cout<<a[i]; cout<<endl;
}

/*          123  
            124
            125
            134
            ....
            345   
                                */
void nextBit(){
   int i=k;
   while(i&&a[i]==n-(k-i)){
   		i--;
   }
   if(i){
   	a[i]++;
   	for(int j=1+i;j<=k;++j)
   		a[j]=a[i]+j-i;
   } else test=0;
   
}

main()
{
    //to hop chop k cua 1,2,...n
    cin >>k>>n; 
    for(int i=1;i<=k;i++) a[i]=i;
    while (test)
    {
        out();
        nextBit();
    }
}
