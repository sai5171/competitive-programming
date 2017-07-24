#include<stdio.h>
#include<iostream>
int main()
{
    int n;
    char a[1000][100];
    char b[]={'S','i','m','o','n',' ','s','a','y','s'};
    scanf("%d",&n);
    int x;
    x=getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%[^\n]s",a[i]);
        x=getchar();
        int count=0;
        for(int j=0;j<=9;j++)
        {
            if(a[i][j]==b[j])
                count++;
        }
        if(count==10)
        {
            for(int j=10;a[i][j]!='\0';j++)
                printf("%c",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
