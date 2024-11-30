// Lucky Division

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
    bool b=false;
    int a[]={4,7,44,47,47,444,447,474,477,777,774,744},n;
    cin>>n;
    for(int i=0;i<12;i++)
    {
        if(n%a[i]==0)
        {
            b=true;
            break;
        }
    }
    if(b)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
