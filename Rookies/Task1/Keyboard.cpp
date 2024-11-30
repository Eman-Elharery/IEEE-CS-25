// Keyboard
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
    string s="qwertyuiopasdfghjkl;zxcvbnm,./",s1;
    char c;
    cin>>c>>s1;
    int n=s1.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<s.size(); j++)
        {
            if(s1[i]==s[j])
            {
                if(c=='L')
                {
                    if(j==s.size()-1)
                    {
                        cout<<"q";
                    }
                    else
                    {
                        cout<<s[j+1];
                    }
                }
                else
                {
                    if(j==0)
                    {
                        cout<<"/";
                    }
                    else
                    {
                        cout<<s[j-1];
                    }
                }
            }
        }
    }
    return 0;
}
