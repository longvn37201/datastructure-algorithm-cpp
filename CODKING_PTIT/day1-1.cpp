#include <bits/stdc++.h>
using namespace std;

long long n, m, run, testCase;

void backTrack()
{
    if(testCase) return;
    for (int j = 2; j <= 3; j++)
    {
        if(testCase) return;

        n *= j;
        run++;
        if (n < m)
            backTrack();
        else
        {
            if(n==m){
                cout<<run;
                testCase++; return;
            }
        }
        n/=j;run--;
    }
}

main()
{
        cin >> n >> m;
        run = 0;
        testCase = 0;
        if(m==n) cout<<0;
        else{
            if (m < n)
                ;
            else
            {
                backTrack();
            }
            if(testCase==0) cout<<-1;

        }
}