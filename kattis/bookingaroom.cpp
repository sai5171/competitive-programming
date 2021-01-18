#include<stdio.h>
int main()
{
    int r,n;
    static int a[101];
    scanf("%d %d",&r,&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);
        a[x]=1;
    }
    for(int i=1;i<=r;i++)
    {
        if(a[i]==0)
        {
            printf("%d",i);
            return 0;
        }
    }
    int count=0;
    for(int i=0;i<=r;i++)
        count=count+a[i];
    if(count==r)
        printf("too late");
    return 0;
}
