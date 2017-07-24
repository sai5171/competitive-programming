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
  while(cin >> n && n!=-1)
  {
    cin.get();
    char a[105][105];
    for(lli i=0;i<105;i++)
    {
      for(lli j=0;j<105;j++)
      {
        a[i][j]='$';
      }
    }
    char x='A';
    for(lli i=50;i<=54;i++)
    {
      for(lli j=50;j<=54;j++)
      {
        a[i][j]=x;
        x++;
      }
    }
    while(n--)
    {
      char x;
      string s;
      cin >> x >> s;
      int change=0;
      for(lli i=0;i<105;i++)
      {
        for(lli j=0;j<105;j++)
        {
          if(a[i][j]==x)
          {
            if(s.compare("up")==0)
            {
              //cout << "up\n";         
              change++;
              char temp=a[i][j];
              a[i][j]='$';
              lli k=i,l=j;
              k--;
              for(;k>=0;k--)
              {
                if(a[k][l]=='$')
                  {swap(a[k][l],temp);break;}
                else
                  swap(a[k][l],temp);
              }
            }  
            if(s.compare("down")==0)
            {
              //cout << "down\n";             
              change++;
              char temp=a[i][j];
              a[i][j]='$';
              lli k=i,l=j;
              k++;
              for(;k<105;k++)
              {
                if(a[k][l]=='$')
                  {swap(a[k][l],temp);break;}
                else
                  swap(a[k][l],temp);
              }
            }  
            if(s.compare("left")==0)
            {
              //cout << "left\n";     
              change++; 
              char temp=a[i][j];
              a[i][j]='$';
              lli k=i,l=j;
              l--;
              for(;l>=0;l--)
              {
                if(a[k][l]=='$')
                  {swap(a[k][l],temp);break;}
                else
                  swap(a[k][l],temp);
              }
            }  
            if(s.compare("right")==0)
            {
              //cout << "right\n";    
              change++;          
              char temp=a[i][j];
              a[i][j]='$';
              lli k=i,l=j;
              l++;
              for(;l<105;l++)
              {
                if(a[k][l]=='$')
                  {swap(a[k][l],temp);break;}
                else
                  swap(a[k][l],temp);
              }
            }  
            break;
          }
        }
        if(change>0)
          break;
      }
    }
    //print
    /*
    for(lli i=25;i<75;i++)
    {
      for(lli j=25;j<75;j++)
      {
        cout << a[i][j];
      }
      cout << endl;
    }
    cout << endl;
    */
    lli imin=5171,imax=-1,jmin=5171,jmax=-1;
    for(lli i=0;i<105;i++)
    {
      lli x=0;
      for(lli j=0;j<105;j++)
      {
        if(a[i][j]!='$')
          {x++;break;}
      }
      if(x==1 && imin==5171)
        imin=i;
      if(x==1)
        imax=i;
    }
    for(lli j=0;j<105;j++)
    {
      lli x=0;
      for(lli i=0;i<105;i++)
      {
        if(a[i][j]!='$')
          {x++;break;}
      }
      if(x==1 && jmin==5171)
        jmin=j;
      if(x==1)
        jmax=j;
    }
    for(lli i=imin;i<=imax;i++)
    {
      lli max;
      for(max=jmax;;max--)
      {
        if(a[i][max]!='$')
          break;
      }
      for(lli j=jmin;j<=max;j++)
      {
        if(a[i][j]!='$')
          cout << a[i][j];
        else
          cout << " ";
      }
      cout << endl; 
    }
    cout << endl;
  }
  return 0;
}
