#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[255],b[255],c[510];
        int x,y;
        int i,j,k;
         int max=0;
        for(i=0;i<=255;i++)
            a[i]=0;
        for(i=0;i<=255;i++)
            b[i]=0;
        for(i=0;i<=510;i++)
            c[i]=0;
        scanf("%d",&x);
        for(i=0;i<=x;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&y);
        for(i=0;i<=y;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<=x;i++)
        {
            for(j=0;j<=y;j++)
            {
                if(max<i+j)
                    max=i+j;
                c[i+j]+=((a[i])*(b[j]));
            }
        }
        printf("%d\n",max);
        for(int m=0;m<=max;m++)
                printf("%d ",c[m]);
                printf("\n");
    }
    return 0;
}
