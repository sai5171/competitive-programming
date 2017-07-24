#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <string>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
    //ofstream fout ("a.ou");
    long long int n;
    cin >> n;
    long long int x;
    x=getchar();
    while(1==1)
    { 
        if(n==0)
            {break;}
        vector<string> v;
        long long int i;
        fr(i,0,n)
        {
            string s;
            getline(cin,s);
            v.pb(s);
        }
        stable_sort(v.begin(),v.end(),[](const string q,const string w)
        {
            if(q[0]-w[0]==0 && q[1]-w[1]==0)
                return 0;
            else if(q[0]-w[0]>0)
                return 0;
            else if(q[0]==w[0] && q[1]-w[1]>0)
					return 0;
            else
                return 1;
        });
        for(auto j=v.begin();j!=v.end();j++)
            cout << *j << endl;
        cin >> n;
        x=getchar();
        if(n!=0)
            cout << endl;
    }
    return 0;
}
