//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
	//ifstream cin ("a.in");
	//ofstream cout ("a.ou");
	string s;
	while(getline(cin,s))
	{
		int first=0;
		string x;
		long long int i=0,j=0;
		for(;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				first++;
				x=s.substr(j,i-j);
				j=i;
				j++;
				if(x[0]>='0' && x[0] <='9')
				{
					if(first==1)
					{
						int z=stoll(x);
						switch(z)
						{
								case 0:
									cout << "Zero" << " ";
									break;
								case 1:
									cout << "One" << " ";
									break;
								case 2:
									cout << "Two" << " ";
									break;
								case 3:
									cout << "Three" << " ";
									break;
								case 4:
									cout << "Four" << " ";
									break;
								case 5:
									cout << "Five" << " ";
									break;
								case 6:
									cout << "Six" << " ";
									break;
								case 7:
									cout << "Seven" << " ";
									break;
								case 8:
									cout << "Eight" << " ";
									break;
								case 9:
									cout << "Nine" << " ";
									break;
								case 10:
									cout << "Ten" << " ";
									break;
								case 11:
									cout << "Eleven" << " ";
									break;
								case 12:
									cout << "Twelve" << " ";
									break;
								case 13:
									cout << "Thirteen" << " ";
									break;
								case 14:
									cout << "Fourteen" << " ";
									break;
								case 15:
									cout << "Fifteen" << " ";
									break;
								case 16:
									cout << "Sixteen" << " ";
									break;
								case 17:
									cout << "Seventeen" << " ";
									break;
								case 18:
									cout << "Eighteen" << " ";
									break;
								case 19:
									cout << "Nineteen" << " ";
									break;
								case 20:
									cout << "Twenty" << " ";
									break;
								case 21:
									cout << "Twenty-one" << " ";
									break;
								case 22:
									cout << "Twenty-two" << " ";
									break;
								case 23:
									cout << "Twenty-three" << " ";
									break;
								case 24:
									cout << "Twenty-four" << " ";
									break;
								case 25:
									cout << "Twenty-five" << " ";
									break;
								case 26:
									cout << "Twenty-six" << " ";
									break;
								case 27:
									cout << "Twenty-seven" << " ";
									break;
								case 28:
									cout << "Twenty-eight" << " ";
									break;
								case 29:
									cout << "Twenty-nine" << " ";
									break;
								case 30:
									cout << "Thirty" << " ";
									break;
								case 31:
									cout << "Thirty-one" << " ";
									break;
								case 32:
									cout << "Thirty-two" << " ";
									break;
								case 33:
									cout << "Thirty-three" << " ";
									break;
								case 34:
									cout << "Thirty-four" << " ";
									break;
								case 35:
									cout << "Thirty-five" << " ";
									break;
								case 36:
									cout << "Thirty-six" << " ";
									break;
								case 37:
									cout << "Thirty-seven" << " ";
									break;
								case 38:
									cout << "Thirty-eight" << " ";
									break;
								case 39:
									cout << "Thirty-nine" << " ";
									break;
								case 40:
									cout << "Forty" << " ";
									break;
								case 41:
									cout << "Forty-one" << " ";
									break;
								case 42:
									cout << "Forty-two" << " ";
									break;
								case 43:
									cout << "Forty-three" << " ";
									break;
								case 44:
									cout << "Forty-four" << " ";
									break;
								case 45:
									cout << "Forty-five" << " ";
									break;
								case 46:
									cout << "Forty-six" << " ";
									break;
								case 47:
									cout << "Forty-seven" << " ";
									break;
								case 48:
									cout << "Forty-eight" << " ";
									break;
								case 49:
									cout << "Forty-nine" << " ";
									break;
								case 50:
									cout << "Fifty" << " ";
									break;
								case 51:
									cout << "Fifty-one" << " ";
									break;
								case 52:
									cout << "Fifty-two" << " ";
									break;
								case 53:
									cout << "Fifty-three" << " ";
									break;
								case 54:
									cout << "Fifty-four" << " ";
									break;
								case 55:
									cout << "Fifty-five" << " ";
									break;
								case 56:
									cout << "Fifty-six" << " ";
									break;
								case 57:
									cout << "Fifty-seven" << " ";
									break;
								case 58:
									cout << "Fifty-eight" << " ";
									break;
								case 59:
									cout << "Fifty-nine" << " ";
									break;
								case 60:
									cout << "Sixty" << " ";
									break;
								case 61:
									cout << "Sixty-one" << " ";
									break;
								case 62:
									cout << "Sixty-two" << " ";
									break;
								case 63:
									cout << "Sixty-three" << " ";
									break;
								case 64:
									cout << "Sixty-four" << " ";
									break;
								case 65:
									cout << "Sixty-five" << " ";
									break;
								case 66:
									cout << "Sixty-six" << " ";
									break;
								case 67:
									cout << "Sixty-seven" << " ";
									break;
								case 68:
									cout << "Sixty-eight" << " ";
									break;
								case 69:
									cout << "Sixty-nine" << " ";
									break;
								case 70:
									cout << "Seventy" << " ";
									break;
								case 71:
									cout << "Seventy-one" << " ";
									break;
								case 72:
									cout << "Seventy-two" << " ";
									break;
								case 73:
									cout << "Seventy-three" << " ";
									break;
								case 74:
									cout << "Seventy-four" << " ";
									break;
								case 75:
									cout << "Seventy-five" << " ";
									break;
								case 76:
									cout << "Seventy-six" << " ";
									break;
								case 77:
									cout << "Seventy-seven" << " ";
									break;
								case 78:
									cout << "Seventy-eight" << " ";
									break;
								case 79:
									cout << "Seventy-nine" << " ";
									break;
								case 80:
									cout << "Eighty" << " ";
									break;
								case 81:
									cout << "Eighty-one" << " ";
									break;
								case 82:
									cout << "Eighty-two" << " ";
									break;
								case 83:
									cout << "Eighty-three" << " ";
									break;
								case 84:
									cout << "Eighty-four" << " ";
									break;
								case 85:
									cout << "Eighty-five" << " ";
									break;
								case 86:
									cout << "Eighty-six" << " ";
									break;
								case 87:
									cout << "Eighty-seven" << " ";
									break;
								case 88:
									cout << "Eighty-eight" << " ";
									break;
								case 89:
									cout << "Eighty-nine" << " ";
									break;
								case 90:
									cout << "Ninety" << " ";
									break;
								case 91:
									cout << "Ninety-one" << " ";
									break;
								case 92:
									cout << "Ninety-two" << " ";
									break;
								case 93:
									cout << "Ninety-three" << " ";
									break;
								case 94:
									cout << "Ninety-four" << " ";
									break;
								case 95:
									cout << "Ninety-five" << " ";
									break;
								case 96:
									cout << "Ninety-six" << " ";
									break;
								case 97:
									cout << "Ninety-seven" << " ";
									break;
								case 98:
									cout << "Ninety-eight" << " ";
									break;
								case 99:
									cout << "Ninety-nine" << " ";
									break;	
						}
					}
					else
					{
						int z=stoll(x);
						switch(z)
						{
								case 0:
									cout << "zero" << " ";
									break;
								case 1:
									cout << "one" << " ";
									break;
								case 2:
									cout << "two" << " ";
									break;
								case 3:
									cout << "three" << " ";
									break;
								case 4:
									cout << "four" << " ";
									break;
								case 5:
									cout << "five" << " ";
									break;
								case 6:
									cout << "six" << " ";
									break;
								case 7:
									cout << "seven" << " ";
									break;
								case 8:
									cout << "eight" << " ";
									break;
								case 9:
									cout << "nine" << " ";
									break;
								case 10:
									cout << "ten" << " ";
									break;
								case 11:
									cout << "eleven" << " ";
									break;
								case 12:
									cout << "twelve" << " ";
									break;
								case 13:
									cout << "thirteen" << " ";
									break;
								case 14:
									cout << "fourteen" << " ";
									break;
								case 15:
									cout << "fifteen" << " ";
									break;
								case 16:
									cout << "sixteen" << " ";
									break;
								case 17:
									cout << "seventeen" << " ";
									break;
								case 18:
									cout << "eighteen" << " ";
									break;
								case 19:
									cout << "nineteen" << " ";
									break;
								case 20:
									cout << "twenty" << " ";
									break;
								case 21:
									cout << "twenty-one" << " ";
									break;
								case 22:
									cout << "twenty-two" << " ";
									break;
								case 23:
									cout << "twenty-three" << " ";
									break;
								case 24:
									cout << "twenty-four" << " ";
									break;
								case 25:
									cout << "twenty-five" << " ";
									break;
								case 26:
									cout << "twenty-six" << " ";
									break;
								case 27:
									cout << "twenty-seven" << " ";
									break;
								case 28:
									cout << "twenty-eight" << " ";
									break;
								case 29:
									cout << "twenty-nine" << " ";
									break;
								case 30:
									cout << "thirty" << " ";
									break;
								case 31:
									cout << "thirty-one" << " ";
									break;
								case 32:
									cout << "thirty-two" << " ";
									break;
								case 33:
									cout << "thirty-three" << " ";
									break;
								case 34:
									cout << "thirty-four" << " ";
									break;
								case 35:
									cout << "thirty-five" << " ";
									break;
								case 36:
									cout << "thirty-six" << " ";
									break;
								case 37:
									cout << "thirty-seven" << " ";
									break;
								case 38:
									cout << "thirty-eight" << " ";
									break;
								case 39:
									cout << "thirty-nine" << " ";
									break;
								case 40:
									cout << "forty" << " ";
									break;
								case 41:
									cout << "forty-one" << " ";
									break;
								case 42:
									cout << "forty-two" << " ";
									break;
								case 43:
									cout << "forty-three" << " ";
									break;
								case 44:
									cout << "forty-four" << " ";
									break;
								case 45:
									cout << "forty-five" << " ";
									break;
								case 46:
									cout << "forty-six" << " ";
									break;
								case 47:
									cout << "forty-seven" << " ";
									break;
								case 48:
									cout << "forty-eight" << " ";
									break;
								case 49:
									cout << "forty-nine" << " ";
									break;
								case 50:
									cout << "fifty" << " ";
									break;
								case 51:
									cout << "fifty-one" << " ";
									break;
								case 52:
									cout << "fifty-two" << " ";
									break;
								case 53:
									cout << "fifty-three" << " ";
									break;
								case 54:
									cout << "fifty-four" << " ";
									break;
								case 55:
									cout << "fifty-five" << " ";
									break;
								case 56:
									cout << "fifty-six" << " ";
									break;
								case 57:
									cout << "fifty-seven" << " ";
									break;
								case 58:
									cout << "fifty-eight" << " ";
									break;
								case 59:
									cout << "fifty-nine" << " ";
									break;
								case 60:
									cout << "sixty" << " ";
									break;
								case 61:
									cout << "sixty-one" << " ";
									break;
								case 62:
									cout << "sixty-two" << " ";
									break;
								case 63:
									cout << "sixty-three" << " ";
									break;
								case 64:
									cout << "sixty-four" << " ";
									break;
								case 65:
									cout << "sixty-five" << " ";
									break;
								case 66:
									cout << "sixty-six" << " ";
									break;
								case 67:
									cout << "sixty-seven" << " ";
									break;
								case 68:
									cout << "sixty-eight" << " ";
									break;
								case 69:
									cout << "sixty-nine" << " ";
									break;
								case 70:
									cout << "seventy" << " ";
									break;
								case 71:
									cout << "seventy-one" << " ";
									break;
								case 72:
									cout << "seventy-two" << " ";
									break;
								case 73:
									cout << "seventy-three" << " ";
									break;
								case 74:
									cout << "seventy-four" << " ";
									break;
								case 75:
									cout << "seventy-five" << " ";
									break;
								case 76:
									cout << "seventy-six" << " ";
									break;
								case 77:
									cout << "seventy-seven" << " ";
									break;
								case 78:
									cout << "seventy-eight" << " ";
									break;
								case 79:
									cout << "seventy-nine" << " ";
									break;
								case 80:
									cout << "eighty" << " ";
									break;
								case 81:
									cout << "eighty-one" << " ";
									break;
								case 82:
									cout << "eighty-two" << " ";
									break;
								case 83:
									cout << "eighty-three" << " ";
									break;
								case 84:
									cout << "eighty-four" << " ";
									break;
								case 85:
									cout << "eighty-five" << " ";
									break;
								case 86:
									cout << "eighty-six" << " ";
									break;
								case 87:
									cout << "eighty-seven" << " ";
									break;
								case 88:
									cout << "eighty-eight" << " ";
									break;
								case 89:
									cout << "eighty-nine" << " ";
									break;
								case 90:
									cout << "ninety" << " ";
									break;
								case 91:
									cout << "ninety-one" << " ";
									break;
								case 92:
									cout << "ninety-two" << " ";
									break;
								case 93:
									cout << "ninety-three" << " ";
									break;
								case 94:
									cout << "ninety-four" << " ";
									break;
								case 95:
									cout << "ninety-five" << " ";
									break;
								case 96:
									cout << "ninety-six" << " ";
									break;
								case 97:
									cout << "ninety-seven" << " ";
									break;
								case 98:
									cout << "ninety-eight" << " ";
									break;
								case 99:
									cout << "ninety-nine" << " ";
									break;	
						}
					}
				}
				else
					cout << x << " ";
			}
		}
		first++;
		x=s.substr(j,i-j);
		j=i;
		j++;
		if(x[0]>='0' && x[0] <='9')
		{
				int z=stoll(x);
						switch(z)
						{
								case 0:
									cout << "zero" << " ";
									break;
								case 1:
									cout << "one" << " ";
									break;
								case 2:
									cout << "two" << " ";
									break;
								case 3:
									cout << "three" << " ";
									break;
								case 4:
									cout << "four" << " ";
									break;
								case 5:
									cout << "five" << " ";
									break;
								case 6:
									cout << "six" << " ";
									break;
								case 7:
									cout << "seven" << " ";
									break;
								case 8:
									cout << "eight" << " ";
									break;
								case 9:
									cout << "nine" << " ";
									break;
								case 10:
									cout << "ten" << " ";
									break;
								case 11:
									cout << "eleven" << " ";
									break;
								case 12:
									cout << "twelve" << " ";
									break;
								case 13:
									cout << "thirteen" << " ";
									break;
								case 14:
									cout << "fourteen" << " ";
									break;
								case 15:
									cout << "fifteen" << " ";
									break;
								case 16:
									cout << "sixteen" << " ";
									break;
								case 17:
									cout << "seventeen" << " ";
									break;
								case 18:
									cout << "eighteen" << " ";
									break;
								case 19:
									cout << "nineteen" << " ";
									break;
								case 20:
									cout << "twenty" << " ";
									break;
								case 21:
									cout << "twenty-one" << " ";
									break;
								case 22:
									cout << "twenty-two" << " ";
									break;
								case 23:
									cout << "twenty-three" << " ";
									break;
								case 24:
									cout << "twenty-four" << " ";
									break;
								case 25:
									cout << "twenty-five" << " ";
									break;
								case 26:
									cout << "twenty-six" << " ";
									break;
								case 27:
									cout << "twenty-seven" << " ";
									break;
								case 28:
									cout << "twenty-eight" << " ";
									break;
								case 29:
									cout << "twenty-nine" << " ";
									break;
								case 30:
									cout << "thirty" << " ";
									break;
								case 31:
									cout << "thirty-one" << " ";
									break;
								case 32:
									cout << "thirty-two" << " ";
									break;
								case 33:
									cout << "thirty-three" << " ";
									break;
								case 34:
									cout << "thirty-four" << " ";
									break;
								case 35:
									cout << "thirty-five" << " ";
									break;
								case 36:
									cout << "thirty-six" << " ";
									break;
								case 37:
									cout << "thirty-seven" << " ";
									break;
								case 38:
									cout << "thirty-eight" << " ";
									break;
								case 39:
									cout << "thirty-nine" << " ";
									break;
								case 40:
									cout << "forty" << " ";
									break;
								case 41:
									cout << "forty-one" << " ";
									break;
								case 42:
									cout << "forty-two" << " ";
									break;
								case 43:
									cout << "forty-three" << " ";
									break;
								case 44:
									cout << "forty-four" << " ";
									break;
								case 45:
									cout << "forty-five" << " ";
									break;
								case 46:
									cout << "forty-six" << " ";
									break;
								case 47:
									cout << "forty-seven" << " ";
									break;
								case 48:
									cout << "forty-eight" << " ";
									break;
								case 49:
									cout << "forty-nine" << " ";
									break;
								case 50:
									cout << "fifty" << " ";
									break;
								case 51:
									cout << "fifty-one" << " ";
									break;
								case 52:
									cout << "fifty-two" << " ";
									break;
								case 53:
									cout << "fifty-three" << " ";
									break;
								case 54:
									cout << "fifty-four" << " ";
									break;
								case 55:
									cout << "fifty-five" << " ";
									break;
								case 56:
									cout << "fifty-six" << " ";
									break;
								case 57:
									cout << "fifty-seven" << " ";
									break;
								case 58:
									cout << "fifty-eight" << " ";
									break;
								case 59:
									cout << "fifty-nine" << " ";
									break;
								case 60:
									cout << "sixty" << " ";
									break;
								case 61:
									cout << "sixty-one" << " ";
									break;
								case 62:
									cout << "sixty-two" << " ";
									break;
								case 63:
									cout << "sixty-three" << " ";
									break;
								case 64:
									cout << "sixty-four" << " ";
									break;
								case 65:
									cout << "sixty-five" << " ";
									break;
								case 66:
									cout << "sixty-six" << " ";
									break;
								case 67:
									cout << "sixty-seven" << " ";
									break;
								case 68:
									cout << "sixty-eight" << " ";
									break;
								case 69:
									cout << "sixty-nine" << " ";
									break;
								case 70:
									cout << "seventy" << " ";
									break;
								case 71:
									cout << "seventy-one" << " ";
									break;
								case 72:
									cout << "seventy-two" << " ";
									break;
								case 73:
									cout << "seventy-three" << " ";
									break;
								case 74:
									cout << "seventy-four" << " ";
									break;
								case 75:
									cout << "seventy-five" << " ";
									break;
								case 76:
									cout << "seventy-six" << " ";
									break;
								case 77:
									cout << "seventy-seven" << " ";
									break;
								case 78:
									cout << "seventy-eight" << " ";
									break;
								case 79:
									cout << "seventy-nine" << " ";
									break;
								case 80:
									cout << "eighty" << " ";
									break;
								case 81:
									cout << "eighty-one" << " ";
									break;
								case 82:
									cout << "eighty-two" << " ";
									break;
								case 83:
									cout << "eighty-three" << " ";
									break;
								case 84:
									cout << "eighty-four" << " ";
									break;
								case 85:
									cout << "eighty-five" << " ";
									break;
								case 86:
									cout << "eighty-six" << " ";
									break;
								case 87:
									cout << "eighty-seven" << " ";
									break;
								case 88:
									cout << "eighty-eight" << " ";
									break;
								case 89:
									cout << "eighty-nine" << " ";
									break;
								case 90:
									cout << "ninety" << " ";
									break;
								case 91:
									cout << "ninety-one" << " ";
									break;
								case 92:
									cout << "ninety-two" << " ";
									break;
								case 93:
									cout << "ninety-three" << " ";
									break;
								case 94:
									cout << "ninety-four" << " ";
									break;
								case 95:
									cout << "ninety-five" << " ";
									break;
								case 96:
									cout << "ninety-six" << " ";
									break;
								case 97:
									cout << "ninety-seven" << " ";
									break;
								case 98:
									cout << "ninety-eight" << " ";
									break;
								case 99:
									cout << "ninety-nine" << " ";
									break;	
						}			
			
		}
		else
		cout << x << " " ;
		cout << endl;
	}
	return 0;
}
