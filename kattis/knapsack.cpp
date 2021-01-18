//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
    ifstream fin ("a.in");
    ofstream fout ("a.ans");
    ios_base::sync_with_stdio(false);
    double maxx;
    long long int c,n;
    while(cin >> maxx >> n)
    {
        if(n<=0)
        {
			cout << "0\n";
			continue;
		}
        c=(long long int)trunc(maxx);
        vector<vector<long long int>> v(n,vector<long long int>(2));
        long long int i=0;
        long long int j;
        long long int temp=n;
        while(temp--)
        {
            long long int val,weg;
            cin >> val >> weg;
            v[i][0]=val;
            v[i][1]=weg;
            i++;
        }
        if(maxx<=0)
        {
			cout << "0\n";
			continue;
		}
        vector<vector<long long int>> s(n+1,vector<long long int>(c+1,0));
        for(long long int i=0;i<v.size();i++)
        {
            long long int value,weight;
            value=v[i][0];
            weight=v[i][1];
            for(long long int j=0;j<c+1;j++)
            {
                if(j<weight)
                    {s[i+1][j]=s[i][j];continue;}
                s[i+1][j]=max(s[i][j],value+s[i][j-weight]);
            }
        }
        //print
        /*
        for(long long int i=0;i<s.size();i++)
        {
            for(long long int j=0;j<s[i].size();j++)
                cout << s[i][j] << " ";
            cout << endl;
        }
        */
        vector<long long int> ans;
        i=n,j=c;
        while(j>0 && i>0)
        {
            if(s[i][j]==s[i-1][j])
                i--;
            else
            {
                long long int weight;
                weight=v[i-1][1];
                ans.pb(i-1);
                j=j-weight;
                i--;
            }
        } 
        cout << ans.size() << endl;
        for(auto it=ans.begin();it!=ans.end();it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}
