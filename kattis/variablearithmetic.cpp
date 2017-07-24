#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    map<string,long long int> m;
    vector<string> v;
    string s,s1,s2;
    while(getline(cin,s))
    {
        if(s[0]=='0' && s.size()==1)
            break;
        long long int i,j;
        int ch=0;
        for(i=0,j=0;i<s.size();i++)
        {
            if(s[i]=='=')
            {
                s1=s.substr(j,i-j-1);
                s2=s.substr(i+2,s.size());
                m[s1]=stoll(s2);
                ch=1;
                break;
            }
        }
        long long int sum=0;
        if(ch==0)
        {
            for(i=0,j=0;i<s.size();i++)
            {
                if(s[i]==' ')
                {
                    s1=s.substr(j,i-j);
                    if(s1[0]>='0' && s1[0]<='9')
                        sum+=stoll(s1);
                    else
                    {
                        auto it=m.find(s1);
                        if(it==m.end())
                            v.push_back(s1);
                        else
                            sum+=it->second;
                    }
                    j=i+3;
                    i=i+3;
                }
            }
            s1=s.substr(j,i-j);
            if(s1[0]>='0' && s1[0]<='9')
                sum+=stoll(s1);
            else
            {
                auto it=m.find(s1);
                if(it==m.end())
                    v.push_back(s1);
                else
                    sum+=it->second;
            }
            int ch=0;
            if(sum!=0)
            {
                cout << sum  << " " ;
                ch=1;
            }
            if(ch==0)
            {
                auto itr=v.begin();
                if(itr!=v.end())
                    cout << *itr << " ";
                for(itr++;itr!=v.end();itr++)
                    cout << "+ " << *itr << " ";
                cout << endl;   
            }
            else
            {
                for(auto itr=v.begin();itr!=v.end();itr++)
                    cout << "+ " << *itr << " ";
                cout << endl;
            }
            v.clear();
        }
    }
    return 0;
}
 RSS
