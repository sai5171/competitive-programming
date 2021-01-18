#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	static int a[5000][5000];
	int i,j;
   	int count=0;
	int n;
	cin >> n;
	int x;
	for(i=0;i<n;i++)
	{
		int x1,y1;
		cin >> x1 >> y1;
		a[x1][y1]=1; 
	}
    	for(i=0;i<n;i++)
    	{
        	int sum=0;
	        for(j=0;j<n;j++)
            		sum=sum+a[i][j]; 
        if(sum>1)
        {
            printf("INCORRECT");/*r*/
            return 0;
        }
    }
    for(j=0;j<n;j++)
    {
        int sum=0;
        for(i=0;i<n;i++)
             sum=sum+a[i][j];
        if(sum>1)
        {
            printf("INCORRECT");/*c*/
            return 0;
        }
        
    }
    for(i=0,j=0;j<n;j++)
    {
        int x=j+1;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
            sum=sum+a[p][q];
            if(sum>1)
            {
                printf("INCORRECT");/*d1*/
                return 0;
            }
            p++;
            q--; 
        } 
    }
    for(i=1,j=n-1;i<n;i++)
    {
        int x=(j-i)+1;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
            sum=sum+a[p][q];
            if(sum>1)
            {
                printf("INCORRECT");
                return 0;
            }
            p++;
            q--;
        } 
    }
    for(i=0,j=n-1;j>=0;j--)
    {
        int x=n-j;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
            sum=sum+a[p][q];
            if(sum>1)
            {
                printf("INCORRECT");/*d3*/
                return 0;
            }
            p++;
            q++;
        }
    }
    for(i=1,j=0;i<n;i++)
    {
        int x=n-i;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
            sum=sum+a[p][q];
             if(sum>1)
             {
                 printf("INCORRECT");/*d4*/
                 return 0;
             }
             p++;
             q++;
        }
    }
    printf("CORRECT");
    return 0;
} 