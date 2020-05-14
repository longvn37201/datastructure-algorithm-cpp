#include<bits/stdc++.h>
using namespace std;

struct dta{
    int val, pos;
};

bool cmp(dta a, dta b){
    return a.val <=b.val ;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<dta> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i].val;
            a[i].pos = i;
        }
        sort(a.begin(), a.end(), cmp);

        // int res = 0 ;
        // for(int i=0;i<n;i++)
        // {
        //     int tmp;
        //     while(a[i].pos != i)
        //     {
        //         res ++;
        //         swap(a[i], a[a[i].pos]);
        //     }
        // }
        for(int i=0;i<n;i++)
        {
            // cin >> a[i].val;
            cout<<a[i].pos <<" ";
        }
        // cout << res << '\n';
    }


    return 0;
}