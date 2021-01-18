#include<stdio.h>
#include<iostream>
int main()
{
	int h,m,sub=45;
	if(scanf("%d %d",&h,&m));
	if(m-sub>0)
    {
        printf("%d %d",h,m-sub);
    }
    else if(sub-m>0)
    {
        h=(h==0)?23:h-1;
        printf("%d %d",h,60-sub+m);
    }
    if(sub-m==0)
    {
        printf("%d %d",h,sub-m);
    }
	return 0;
}
