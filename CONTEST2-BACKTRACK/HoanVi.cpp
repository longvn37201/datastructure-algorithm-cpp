#include <iostream>
using namespace std;
int a[100], n;
int check[100]={0};
void Result(void)
{ 
    for (int i = 1; i <= n; i++)
        cout << a[i];cout<<endl;
}
void Try(int i)
{ 
    for (int j = 1; j <= n; j++)
    { 
        if (!check[j])
        {                       //n?u kh? nang j d�ng chua du?c d�ng d?n
            a[i] = j;           //thi?t l?p th�nh ph?n xi l� j
            check[j] = 1; //thi?t l?p chuaxet[j] d� du?c d�ng
            if (i == n)         //n?u xi d� l� th�nh ph?n cu?i c�ng
                Result();       //ta dua ra k?t qu?
            else                ///trong tru?ng h?p kh�c
                Try(i + 1);     //ta x�c d?nh ti?p th�nh ph?n th? i+1
            check[j] = 0;  //nh? ho�n tr? l?i gi� tr? cho chuaxet[j]
        }
    }
}
main()
{
    cin>>n; 
    Try(1);
}
