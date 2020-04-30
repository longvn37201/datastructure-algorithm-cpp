#include <bits/stdc++.h>
using namespace std;
int stop, binary[50], n, gray[50];

void result()
{
    for(int i=1;i<=n;i++)
    {
        cout<<gray[i];
    }
    cout<<" ";
}
void bin()
{
    int i=n;
    while(binary[i]==1)
    {
        binary[i]=0;
        i--;
    }
    if(i==0) stop = 1;
    else binary[i]=1;
}
void binToGray()
{
    binary[0]=0;
    for(int i=1;i<=n;i++) gray[i]=binary[i]^binary[i-1];

}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        stop=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            binary[i]=0;
        }
        while(!stop)
        {
            result();
            bin();
            binToGray();
        }
        cout<<endl;
    }
}
