#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int t;
    cin >> t;
    getchar();
    while(t--)
        {
         string s,d;
        getline(cin,s);
        getline(cin,d);
        for(long long int i=0;i<s.size();i=i+2)
            cout << s[i];
        cout << " ";
        for(long long int i=1;i<s.size();i=i+2)
            cout << s[i];
        cout << endl;
        for(long long int i=0;i<d.size();i=i+2)
            cout << d[i];
        cout << " ";
        for(long long int i=1;i<d.size();i=i+2)
            cout << d[i];
        cout << endl;
    }
    return 0;
}

