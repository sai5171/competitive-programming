#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        a=getchar();
        a=getchar();
        if(a=='b' || a=='B')
            printf("BattleShip\n");
        else if(a=='C' || a=='c')
            printf("Cruiser\n");
        else if(a=='D' || a=='d')
            printf("Destroyer\n");
        else 
            printf("Frigate\n");
    }
    return 0;
} 
