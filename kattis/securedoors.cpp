//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>  
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
//end input macros 
using namespace std;
int main(){
    ofstream fout ("a.ou");
    int n;
    cin >> n;
    int x=getchar();
    vector<string> v;
    while(n--)
    {
        string s;
        char d[20];
        scanf("%s",d);
        x=getchar();
        getline(cin,s);
        if(d[1]=='n')
        {
            //entry
            if(find(v.begin(),v.end(),s)!=v.end())//present
            {
                for(int i=0;i<s.size();i++)
                    cout <<s[i];
               cout << " entered (ANOMALY)" <<endl;
            }
            else//not present
            {
                v.pb(s);
               for(int i=0;i<s.size();i++)
                   cout <<s[i];
                cout << " entered" <<endl;
            }
        }
        else if(d[1]=='x')
        {
            //exit  
            if(find(v.begin(),v.end(),s)!=v.end())//present
            {
                v.erase(remove(v.begin(),v.end(),s),v.end());
                for(int i=0;i<s.size();i++)
                   cout <<s[i];
                cout << " exited" <<endl;
            }
            else//not present
            {
                
                for(int i=0;i<s.size();i++)
                    cout <<s[i];
                cout << " exited (ANOMALY)" <<endl;
            }
        }/*
        for(int i=0;i<v.size();i++)
            cout <<v[i] ;
        cout <<endl;*/
    }
    return 0;
}