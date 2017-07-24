#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long long int n;
    cin >> n;
    vector<long long int> v;
    while(n--)
        {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    for(auto i=v.rbegin();i!=v.rend();i++)
            cout << *i << " ";
    return 0;
}

