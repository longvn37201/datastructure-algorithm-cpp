#include<iostream>
using namespace std;
int main()
{
    int t;
    long long tu,mau;
    cin>>t;
    while(t--)
    {
        cin>>tu>>mau;
        long long res=2;
        double kq=double(tu)/double(mau); //kq la gia tri double cua phan so.
        while(kq>0){
            if(tu*res-mau>=0){
                cout<<"1/"<<res;
                tu=tu*res-mau;   //gan lai tu va mau.
                mau=mau*res;
                kq=double(tu)/double(mau);
                if(kq>0)    cout<<" + ";
            }
            else res++;
        }
        cout<<endl;
    }
}