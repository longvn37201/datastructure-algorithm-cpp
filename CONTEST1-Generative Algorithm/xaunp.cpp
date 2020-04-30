#include <iostream>
using namespace std;
int a[100] = {0}, test = 1, n;
void out(){
    for(int i=1;i<=n;i++) cout<<a[i]; cout<<endl;
}

void next(){
    int i=n;
    while(i&&a[i]){
        a[i]=0;
        i--;
    }
    if(i>0) a[i]=1;
    else test=0;
}

main()
{
    cin >> n;
    while (test)
    {
        out();
        next();
    }
}
