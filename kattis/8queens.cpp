#include<stdio.h>
#include<iostream>
int main()
{
    static int a[10][10];
    int i,j;
   int count=0;
    for(i=0;i<8;i++)
    {
        int y;
        for(j=0;j<8;j++)
        {
            char x;
            x=getchar();
            if(x=='*')
             a[i][j]=1;
        }
        y=getchar();
        
    }
    
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        
    }
    if(count!=8)
    {
        printf("invalid\n");
        return 0;
    }
    for(i=0;i<8;i++)
    {
        int sum=0;
        for(j=0;j<8;j++)
        {
            
            sum=sum+a[i][j];
            
        }
        if(sum>1)
        {
            printf("invalid\n");/*r*/
            return 0;
        }
        
    }
    for(j=0;j<8;j++)
    {
        int sum=0;
        for(i=0;i<8;i++)
        {
            
             sum=sum+a[i][j];
        }
        if(sum>1)
        {
            printf("invalid\n");/*c*/
            return 0;
        }
        
    }
    for(i=0,j=0;j<8;j++)
    {
        int x=j+1;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
            
           
           /* if(a[p][q]==1)
            {
                sum++;
            }*/
            sum=sum+a[p][q];
            if(sum>1)
            {
                printf("invalid\n");/*d1*/
                return 0;
            }
            p++;
            q--;
            
        }
       
    }
    for(i=1,j=7;i<8;i++)
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
                printf("invalid\n");
                return 0;
            }
            p++;
            q--;
        }
       
         
    }
    for(i=0,j=7;j>=0;j--)
    {
        int x=8-j;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
             
            sum=sum+a[p][q];
            if(sum>1)
            {
                printf("invalid\n");/*d3*/
                return 0;
            }
            p++;
            q++;
        }
        
    }
    for(i=1,j=0;i<8;i++)
    {
        int x=8-i;
        int p=i;
        int q=j;
        int sum=0;
        while(x--)
        {
          
           
            sum=sum+a[p][q];
             if(sum>1)
             {
                 printf("invalid\n");/*d4*/
                 return 0;
             }
             p++;
             q++;
        }
       
    }
    printf("valid\n");
    return 0;
}
