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
    //ifstream fin ("a.in");
    //ofstream cout ("a.ou");
    string s;
    while(cin >> s && s!="end")
    {
        //1st
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "+---+";
                    break;
                case '1':
                    cout << "    +";
                    break;
                case '2':
                    cout << "+---+";
                    break;
                case '3':
                    cout << "+---+";
                    break;
                case '4':
                    cout << "+   +";
                    break;
                case '5':
                    cout << "+---+";
                    break;
                case '6':
                    cout << "+---+";
                    break;
                case '7':
                    cout << "+---+";
                    break;
                case '8':
                    cout << "+---+";
                    break;
                case '9':
                    cout << "+---+";
                    break;
                case ':':
                    cout << "     ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //2nd
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "|   |";
                    break;
                case '1':
                    cout << "    |";
                    break;
                case '2':
                    cout << "    |";
                    break;
                case '3':
                    cout << "    |";
                    break;
                case '4':
                    cout << "|   |";
                    break;
                case '5':
                    cout << "|    ";
                    break;
                case '6':
                    cout << "|    ";
                    break;
                case '7':
                    cout << "    |";
                    break;
                case '8':
                    cout << "|   |";
                    break;
                case '9':
                    cout << "|   |";
                    break;
                case ':':
                    cout << "     ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //3rd
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "|   |";
                    break;
                case '1':
                    cout << "    |";
                    break;
                case '2':
                    cout << "    |";
                    break;
                case '3':
                    cout << "    |";
                    break;
                case '4':
                    cout << "|   |";
                    break;
                case '5':
                    cout << "|    ";
                    break;
                case '6':
                    cout << "|    ";
                    break;
                case '7':
                    cout << "    |";
                    break;
                case '8':
                    cout << "|   |";
                    break;
                case '9':
                    cout << "|   |";
                    break;
                case ':':
                    cout << "  o  ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //4th
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "+   +";
                    break;
                case '1':
                    cout << "    +";
                    break;
                case '2':
                    cout << "+---+";
                    break;
                case '3':
                    cout << "+---+";
                    break;
                case '4':
                    cout << "+---+";
                    break;
                case '5':
                    cout << "+---+";
                    break;
                case '6':
                    cout << "+---+";
                    break;
                case '7':
                    cout << "    +";
                    break;
                case '8':
                    cout << "+---+";
                    break;
                case '9':
                    cout << "+---+";
                    break;
                case ':':
                    cout << "     ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //5th
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "|   |";
                    break;
                case '1':
                    cout << "    |";
                    break;
                case '2':
                    cout << "|    ";
                    break;
                case '3':
                    cout << "    |";
                    break;
                case '4':
                    cout << "    |";
                    break;
                case '5':
                    cout << "    |";
                    break;
                case '6':
                    cout << "|   |";
                    break;
                case '7':
                    cout << "    |";
                    break;
                case '8':
                    cout << "|   |";
                    break;
                case '9':
                    cout << "    |";
                    break;
                case ':':
                    cout << "  o  ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //6th
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "|   |";
                    break;
                case '1':
                    cout << "    |";
                    break;
                case '2':
                    cout << "|    ";
                    break;
                case '3':
                    cout << "    |";
                    break;
                case '4':
                    cout << "    |";
                    break;
                case '5':
                    cout << "    |";
                    break;
                case '6':
                    cout << "|   |";
                    break;
                case '7':
                    cout << "    |";
                    break;
                case '8':
                    cout << "|   |";
                    break;
                case '9':
                    cout << "    |";
                    break;
                case ':':
                    cout << "     ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        //7th
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case '0':
                    cout << "+---+";
                    break;
                case '1':
                    cout << "    +";
                    break;
                case '2':
                    cout << "+---+";
                    break;
                case '3':
                    cout << "+---+";
                    break;
                case '4':
                    cout << "    +";
                    break;
                case '5':
                    cout << "+---+";
                    break;
                case '6':
                    cout << "+---+";
                    break;
                case '7':
                    cout << "    +";
                    break;
                case '8':
                    cout << "+---+";
                    break;
                case '9':
                    cout << "+---+";
                    break;
                case ':':
                    cout << "     ";
                    break;
            }
            if(i!=1 && i!=2 && i!=4)
            cout << "  ";
        }
        cout << endl;
        cout << endl;
        cout << endl;
    }
    cout <<"end" << endl;
    return 0;
}

