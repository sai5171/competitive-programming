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
#define si(n) scanf("%d",&n);
//end input macros 
using namespace std;
int main(){
    unsigned long long int x,t;
    cin >> x;
    if(1000<x && x>1000000000)
        return 0;
    t=x;
    unsigned long long int c=0;
    for(unsigned long long int i=2;i<=sqrt(t);i++)
    {
        while(x%i==0)
        {
            x=x/i;
            c++;
        }
    }
    if(x>2)
    	c++;
    if(c==0)
        c=1;
    cout << c ;
    return 0;
}