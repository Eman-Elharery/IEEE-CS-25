// Launch of Collider
#include <iostream>
#include <bits/stdc++.h>
#define FAST
#define endd "\n"
#define ll long long
#define ld long double
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string str;
    cin>>n>>str;
    ll arr[n],minn=(1e9)+1,m=minn,dif;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        if(str[i-1]=='R'&&str[i]=='L')
        {
             dif=abs(arr[i]-arr[i-1])/2;
            if(dif<=minn){
                minn=dif;
            }
        }
    }
    if(minn==m){
    cout<<"-1";
    }
    else
    {
     cout<<minn;
    }
    return 0;
}
