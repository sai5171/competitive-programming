#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n;
    cin >> n;
    getchar();
    unordered_map<string,long long int> m;
    while(n--)
        {
        string s;
        long long int x;
        cin >> s >> x;
        m[s]=x;
    }
    string s;
    getchar();
    while(getline(cin,s))
        {
        
        auto d=m.find(s);
        
        if(d==m.end())
              cout << "Not found\n";
        else
                cout << d->first << "=" <<d->second<< endl;
    }
    return 0;
}

