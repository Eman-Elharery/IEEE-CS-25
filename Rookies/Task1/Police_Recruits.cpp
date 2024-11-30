// Police Recruits
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
    int n,x,officers=0,crimes=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
         if(x>=0)
        {
            officers+= x;
        }
        else
        {
            if(officers > 0)
            {
                officers+=x;
            }
            else
            {
                crimes++;
            }
        }

    }
    cout<<crimes;
    return 0;
}
