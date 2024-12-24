#include<stdio.h>
struct info{
    char name[50];
    char village[50];
};
void display(struct info *u)
{
    printf("\nMethod 1 \n%s \n%s",u->name,u->village);
    printf("\nMethod 2 \n%s \n%s",(*u).name,(*u).village);
}
int main()
{
    struct info u;
    printf("\nEnter the name : ");
    scanf("%[^\n]s",&u.name);
    fflush(stdin);
    printf("\nEnter the village : ");
    scanf("%[^\n]s",&u.village);
    display(&u);
}