#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
    char s[100];
    //string s;
    //getline(cin,s);
    scanf("%s",s);
    long long int l=strlen(s);
    long long int x=0,y=0;
    long long int z=pow(2,(l-1));
    long long int i=0;
    if(z==0)
    {
        if(s[i]=='0')
            ;
        else if(s[i]=='1')
            x=1;
        else if(s[i]=='2')
            y=1;
        else
            {x=1;y=1;}
    }
    while(z!=0)
    {
        if(s[i]=='0')
            ;
        else if(s[i]=='1')
            x=x+z;
        else if(s[i]=='2')
            y=y+z;
        else
        {x=x+z;y=y+z;}
        z=z/2;
        i++;
    }
    printf("%Ld %Ld %Ld",l,x,y);
    return 0;
}