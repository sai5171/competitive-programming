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
    long long int n;
    cin >> n;
    int x=getchar();
    string s;
    vector<string> v;
    while(n--)
    {
        getline(cin,s);
        for(long long int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='b' || s[i]=='c')
                s[i]='2';
            else if(s[i]=='d' || s[i]=='e' ||s[i]=='f')
                s[i]='3';
            else if(s[i]=='g' || s[i]=='h' ||s[i]=='i')
                s[i]='4';
            else if(s[i]=='j' || s[i]=='k' ||s[i]=='l')
                s[i]='5';
            else if(s[i]=='m' || s[i]=='n' ||s[i]=='o')
                s[i]='6';
            else if(s[i]=='p' || s[i]=='q' ||s[i]=='r' || s[i]=='s')
                s[i]='7';
            else if(s[i]=='t' || s[i]=='u' ||s[i]=='v')
                s[i]='8';
            else if(s[i]=='w' || s[i]=='x' ||s[i]=='y' || s[i]=='z')
                s[i]='9';
        }
        v.push_back(s);
    }
    getline(cin,s);
    for(long long int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='b' || s[i]=='c')
            s[i]='2';
        else if(s[i]=='d' || s[i]=='e' ||s[i]=='f')
            s[i]='3';
        else if(s[i]=='g' || s[i]=='h' ||s[i]=='i')
            s[i]='4';
        else if(s[i]=='j' || s[i]=='k' ||s[i]=='l')
            s[i]='5';
        else if(s[i]=='m' || s[i]=='n' ||s[i]=='o')
            s[i]='6';
        else if(s[i]=='p' || s[i]=='q' ||s[i]=='r' || s[i]=='s')
            s[i]='7';
        else if(s[i]=='t' || s[i]=='u' ||s[i]=='v')
            s[i]='8';
        else if(s[i]=='w' || s[i]=='x' ||s[i]=='y' || s[i]=='z')
            s[i]='9';
    }
    long long int count=0;
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(s.compare(*i)==0)
            count++;
    }
    cout << count << endl;
    return 0;
}

