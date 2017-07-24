#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    char a[100];
    scanf("%[^\n]s",&a);
    int i;
    int count=0;
    for(i=0;a[i]!='\0';i++)
        count++;
    for(i=0;i<=count;)
    {
        printf("%c",a[i]);
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            i++;
            i++;
        }
        i++;
    }
    return 0;
}
