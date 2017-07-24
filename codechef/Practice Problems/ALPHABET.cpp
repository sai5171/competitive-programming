#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    string s;
    cin >> s;
    vector<int> v(26,0);
    for(auto i=s.begin();i!=s.end();i++)
    {
        v[*i-'a']=1;
    }
    cin >> t;
    while(t--)
    {
        cin >> s;
        bool check=true;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(v[*i-'a']!=1)
                {check=false;break;}
        }
        if(check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
} 
