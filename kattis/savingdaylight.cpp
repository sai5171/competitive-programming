#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int i=0;
        for(;s[i]!=' ';i++)
            cout <<s[i];
        cout << " ";
        for(i++;s[i]!=' ';i++)
            cout <<s[i];
        cout << " ";
        for(i++;s[i]!=' ';i++)
            cout << s[i];
        cout << " ";
        int h1=0,m1=0,h2=0,m2=0;
        for(i++;s[i]!=':';i++)
            h1=(h1*10)+s[i]-48;
        for(i++;s[i]!=' ';i++)
            m1=(m1*10)+s[i]-48;
        for(i++;s[i]!=':';i++)
            h2=(h2*10)+s[i]-48;
        for(i++;s[i]!='\0';i++)
            m2=(m2*10)+s[i]-48;
        if(m2>=m1)
        {
            m1=m2-m1;
            h1=h2-h1;
        }
        else{
        m1=m1-m2;
        m1=60-m1;
        h1=h2-h1-1;
            }
            cout <<" "<< h1 <<" hours " << m1 << " minutes"<<endl;
    }
    return 0;
}
