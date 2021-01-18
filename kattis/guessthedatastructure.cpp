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
#include <stack>
#include <queue>
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
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define pf push_front
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	lli n;
	while(cin >> n && n!=EOF)
	{
	  stack<int> s;
	  queue<int> q;
	  priority_queue<int> pq;
	  lli x,y;
	  bool is=true,iq=true,ipq=true;
	  while(n--)
	  {
	    cin >> x >> y;
	    if(x==1)
	    {
	     if(is)
	      s.push(y); 
	     if(iq)
	      q.push(y);
	     if(ipq)
	      pq.push(y);
	    }
	    else
	    {
	      if(is)
	      {
	        if(s.size()==0 || s.top()!=y)
	          is=false;
	        else
	          s.pop();
	      }
	      if(iq)
	      {
	        if(q.size()==0 || q.front()!=y)
	          iq=false;
	        q.pop();
	      }
	      if(ipq)
	      {
	        if(pq.size()==0 || pq.top()!=y)
	          ipq=false;
	        else
	          pq.pop();
	      }
	    }
	  }
	  if(is==true && iq==false && ipq==false)
	    cout << "stack" << endl;
	  else if(is==false && iq==true && ipq==false)
	    cout << "queue" << endl;
	  else if(is==false && iq==false && ipq==true)
	    cout << "priority queue" << endl;
	  else if(is==false && iq==false && ipq==false)
	    cout << "impossible" << endl;
	  else 
	    cout << "not sure" << endl;
	}
	return 0;
}
