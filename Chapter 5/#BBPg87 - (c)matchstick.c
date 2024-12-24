#include<stdio.h>
int main()
{
    char c[50];
    printf("---Match Stick Game---\n");
    printf("\nHi, I am Bot.\nNice to meet you.\nHow can I call you?\n\n->");
    scanf("%[^\n]s",c);

    printf("%s, remember this.\n\nWhoever picks the last matchstick will lose the game",c);
    printf("\n\nLets start the game");
    
    int m=21,p,cp;
    
    while(1)
    {
        printf("\n\n\nNumber of matchsticks left = %d",m);
        printf("\nPick 1/2/3/4 matchsticks   : ");
        scanf("%d",&p);
        m=m-p;
        printf("\n\n\nNumber of matchsticks left = %d",m);
        if(p<1 || p>4)
        {
            printf("\n\nDon't Cheat.\n\nPick 1/2/3/4 matchsticks.");
            continue;
        }
        cp=5-p;
        m=m-cp;
        printf("\nComputer Picks             : %d",cp);
        if(m==1)
        {
            printf("\n\nYou are the one who is going to pick last matchstick.");
            printf("\nHurrah!\n\nBot rocked!\n\n%s shocked!",c);
            break;
        }
    }
    return 0;
}