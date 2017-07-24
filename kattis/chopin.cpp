//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main(){
    string a,b;
    long long int i=1;
    while(cin >> a >> b)
    {
        cout <<"Case " << i <<": ";
        i++;
        int x=0;
        if(a[0]=='A' && a[1]=='#')
            {cout <<"Bb ";x=1;}
        else if(a[0]=='B' && a[1]=='b')
            {cout <<"A# ";x=1;}
        else if(a[0]=='C' && a[1]=='#')
            {cout <<"Db ";x=1;}
        else if(a[0]=='D' && a[1]=='b')
            {cout <<"C# ";x=1;}
        else if(a[0]=='D' && a[1]=='#')
            {cout <<"Eb ";x=1;}
        else if(a[0]=='E' && a[1]=='b')
            {cout <<"D# ";x=1;}
        else if(a[0]=='F' && a[1]=='#')
            {cout <<"Gb ";x=1;}
        else if(a[0]=='G' && a[1]=='b')
            {cout <<"F# ";x=1;}
        else if(a[0]=='G' && a[1]=='#')
            {cout <<"Ab ";x=1;}
        else if(a[0]=='A' && a[1]=='b')
            {cout <<"G# ";x=1;}
        else if(a[0]=='A')
            cout <<"UNIQUE\n";
        else if(a[0]=='B')
            cout <<"UNIQUE\n";
         else if(a[0]=='C')
            cout <<"UNIQUE\n";
        else if(a[0]=='D')
            cout <<"UNIQUE\n";
         else if(a[0]=='E')
            cout <<"UNIQUE\n";
         else if(a[0]=='F')
            cout <<"UNIQUE\n";
         else if(a[0]=='G')
            cout <<"UNIQUE\n";
        if(x==1)
        {
            if(b[1]=='i')
                cout<<"minor\n";
            else
                cout<<"major\n";
        }
    }
    return 0;
}
