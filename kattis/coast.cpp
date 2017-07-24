#include<stdio.h>
#include<algorithm>
static int a[1002][1002];
int n,m;
void fun(int,int);
void fun(int i,int j)
{
    if(a[i][j]==3)
        return ;
    else if (a[i][j]==0)
    {
        a[i][j]=3;
        if(i-1>=0 && i-1<=n+1 && j>=0 && j<=m+1)
        fun(i-1,j);
        if(i>=0 && i<=n+1 && j-1>=0 && j-1<=m+1)
        fun(i,j-1);
        if(i>=0 && i<=n+1 && j+1>=0 && j+1<=m+1)
        fun(i,j+1);
        if(i+1>=0 && i+1<=n+1 && j>=0 && j<=m+1)
        fun(i+1,j);
    }
}
int main()
{
	scanf("%d %d",&n,&m);
	int i,j;
    int x;
    int r=0;
    x=getchar();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		    x=getchar();
			a[i][j]=x-48;
		}
		x=getchar();
	}
    fun(0,0);
     for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=m+1;j++)
        {
            if(a[i][j]==1)
            {
                if(a[i-1][j]==3)
                    r++;
                if(a[i][j-1]==3)
                    r++;
                if(a[i][j+1]==3)
                    r++;
                if(a[i+1][j]==3)
                    r++;
            }
        }
    }
    printf("%d",r);
    return 0;
}
