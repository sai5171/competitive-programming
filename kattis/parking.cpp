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
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main()
{
    //ifstream fin ("a.in");
    //ofstream fout ("a.ou");
    long long int a,b,c;
    cin >> a >> b >> c;
    long long int a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    long long int sum=0;
    long long int max=0;
    if(max < a2)
        max=a2;
    if(max < b2)
        max=b2;
    if(max < c2)
        max=c2;
    long long int i=1;
    while(i<=max)
    {
        int count=0;
        if(a1<=i && i<a2)
            count++;
        if(b1<=i && i<b2)
            count++;
        if(c1<=i && i<c2)
            count++;
        if(count==1)
            sum+=count*a;
        else if(count==2)
            sum+=count*b;
        else 
            sum+=count*c;
        i++;
    }
    cout << sum << endl;
    return 0;
} 
