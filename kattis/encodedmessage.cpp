#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <string>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
    //ofstream fout ("a.ou");
    int n;
    cin >> n;
    int i;
    int x=getchar();
    fr(i,0,n)
    {
        char a[10000];
        scanf("%[^\n]s",a);
        x=getchar();
        int l=strlen(a);
        int j=pow(ceil(sqrt(l)),2);
        for(int k=l;k<j;k++)
            a[k]='*';
        int m,n;
        for(m=sqrt(j)-1;m>=0;m--)
        {
            for(n=m;n<j;n=n+sqrt(j))
            {
                if(a[n]!='*')
                cout << a[n];
            }
        }
        cout << endl;
    }
    return 0;
}