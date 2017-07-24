#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s;
    long long int n=0;
    while(getline(cin,s))
    {
        n++;
        if(!s.compare("END"))
            break;
        cout << n << " ";
        if(s.size()==1)
        {
            cout << "EVEN\n";
            continue;
        }
        long long int count=0;
        set<long long int> se;
        for(long long int i=1;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                se.insert(count);
                count=0;
            }
            else
                count++;
        }
        if(se.size()==1)
            cout << "EVEN\n";
        else
            cout << "NOT EVEN\n";
        
    }
    return 0;
} 
