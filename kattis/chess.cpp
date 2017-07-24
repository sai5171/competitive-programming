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
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
//end input macros 
using namespace std;
int main(){
    long long int t;
    cin >> t;
    int x=getchar();
    int y;
    while(t--)
    {
        int ch[8][8]={0};
        char a,c;
        int b,d;
        cin >> a >> b >> c >> d;
        b=b+48;
        d=d+48;
        x=getchar();
        if(b-48 >8 || d-48>8 || b-48<1 || d-48<1 || a-65<0 || c-65<0 || a-65>7 || c-65>7)
            {cout <<"Impossible" << endl;continue;}
        int x=a-65+b-48;
        int y=c-65+d-48;
        if((x%2==0 && y%2==1) || (x%2==1 && y%2==0))
            {cout <<"Impossible" << endl;continue;}
        if(a==c && b==d)
            {cout << "0 " << a << " " << (char)b <<endl;continue;}
        x=a>c?a-c:c-a;
        y=b>d?b-d:d-b;
        if(x==y)
			{cout << "1 " << a << " " << (char)b << " " << c << " " << (char)d <<endl;continue;}
        if( (((char)(((c-65+a-65+b-48-d+48)/2)+65))>64&&((char)(((c-65+a-65+b-48-d+48)/2)+65))<72)&&(((int)(((d-48+b-48+a-65-c+65)/2))) >0 && ((int)(((d-48+b-48+a-65-c+65)/2)))<9))
		{cout << "2 " << a << " " << (char)b << " " << ((char)(((c-65+a-65+b-48-d+48)/2)+65)) << " " << ((int)(((d-48+b-48+a-65-c+65)/2))) << " " << c << " " << (char)d <<endl;continue;}
		char t;t=a;a=c;c=t;t=b;b=d;d=t;
		{cout <<  "2 " << c << " " << (char)d << " " << (char)(((c-65+a-65+b-48-d+48)/2)+65) << " " << (int)(((d-48+b-48+a-65-c+65)/2)) << " " << a << " " << (char)b <<endl;}		
    }
    return 0;
}

