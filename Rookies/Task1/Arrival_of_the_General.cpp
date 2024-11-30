// Arrival of the General

#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    FAST
    int n,maxx=0,minn=1000,num,Mi=0,mi=0;
    cin>>n;
    for(int i =1; i<n+1; i++)
    {
        cin>>num;
        if(num > maxx)
        {
            Mi = i-1;
            maxx = num;
        }
        if(num <= minn)
        {
            mi = i;
            minn = num;
        }
    }
    n-=mi;
    Mi+=n;
    if(Mi > mi)
    {
        cout<<Mi-1;
    }
    else
    {
        cout<<Mi;
    }
    return 0;
}
