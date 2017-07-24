//header macros
#include <stdio.h>
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
    long long int n;
    cin >> n;
    vector<long long int> v;
    while(n--)
    {
        long long int x;
        cin >> x;
        v.pb(x);
    }
    long long int s=v[0];
    for(long long int i=1;i<v.size();i++)
    {
        long long int x=v[i];
        long long int g=gcd(s,x);
        cout << s/g << "/" << x/g << endl;
    }
    return 0;
}