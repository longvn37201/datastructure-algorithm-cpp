


//vu long test 5
#include<bits/stdc++.h>
using namespace std;
#define ll     long long

int main()
{
    ll m,n,k;
    cin>>k;
    while(k--)
    {
        cin>>n>>m;
        ll x,y;
        ll mxd=-1e18, mx=-1e18;
         for (ll i=0;i<n;i++)
        {
            cin>>x>>y;
            mxd=max(mxd, (x-y));
            mx=max(mx, x);
        }
        if(mx>=m )cout<<"1"<<endl;
        else if(mxd<=0)cout<<"MISSION FAILED!"<<endl;
        else
        {
            ll p=m-mx;
            if(p%mxd)cout<<(p/mxd)+2<<endl;
            else  cout<<(p/mxd)+1<<endl;
        }
    }
}






