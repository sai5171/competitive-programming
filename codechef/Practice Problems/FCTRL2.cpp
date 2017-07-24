#include<stdio.h>
int main()
{
    int t,n;
    int i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a[200]={0};
        a[0]=1;
        scanf("%d",&n);
        if(n==1 || n==0)
        {
            printf("1\n");
            continue;
        }
        for(j=2;j<=n;j++)
        {
            int p=0;
            int carry=0;
            int temp=0;
            k=0;
            while(k<=190)
            {
                temp=(a[p]*j)+carry;
                carry=0;
                if(temp>9)
                {
                    int num=temp;
                    temp=num%10;
                    carry=num/10;
                }
                a[p]=temp;
                p++;
                k++;
            }
        }
        for(k=199;a[k]==0;k--);
        for(;k>=0;k--)
                printf("%d",a[k]);
            printf("\n");
    }
    return 0;
}
