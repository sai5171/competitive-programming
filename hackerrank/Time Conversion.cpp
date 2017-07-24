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
//#define cin fin
//#define cout fout
//end input macros
using namespace std;

int main(){
    int h,m,s;
    string a;
    cin >> h;
    getchar();
    cin >> m;
    getchar();
    cin >> s >> a;
    if(a.compare("AM")==0)
    {
        if(h==12)
            h=0;
        if(h>9)
            cout << h;
        else
            cout << "0" << h;
        cout << ":";
        if(m>9)
            cout << m;
        else
            cout << "0" <<  m;
        cout << ":";
        if(s>9)
            cout << s;
        else
            cout << "0" << s;
        cout << endl;
    }
    else
    {
        if(h<12)
            h=h+12;
        if(h>9)
            cout << h;
        else
            cout << "0" << h;
        cout << ":";
        if(m>9)
            cout << m;
        else
            cout << "0" <<  m;
        cout << ":";
        if(s>9)
            cout << s;
        else
            cout << "0" << s;
        cout << endl;
    }
    return 0;
}

