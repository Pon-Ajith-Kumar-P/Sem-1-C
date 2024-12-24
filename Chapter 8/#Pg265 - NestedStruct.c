#include<stdio.h>
#include<math.h>
struct DATE{
    int day;
    int month;
    int year;
};
struct Info{
    int rno;
    char name[50];
    struct DATE date; 
    char course[50];
};
void printinfo(struct Info students[],int n)
{
    printf("\nPrinting all Students Information");
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d Information ",i+1);
        printf("\n1. Roll Number    : %d",students[i].rno);
        printf("\n2. Name           : %s",students[i].name);
        printf("\n3. Date of Birth  : %d/%d/%d",students[i].date.day,students[i].date.month,students[i].date.year);
        printf("\n4. Course         : %s",students[i].course);
    }   
}
int main()
{
    struct Info students[100];
    int n;
    printf("\nHow many students information? - ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d Information ",i+1);
        printf("\n1. Roll Number : ");
        scanf("%d",&students[i].rno);
        fflush(stdin);
        printf("\n2. Name : ");
        scanf("%[^\n]s",&students[i].name);
        printf("\n3. Date of Birth (dd/mm/yyyy) : ");
        scanf("%d/%d/%d",&students[i].date.day,&students[i].date.month,&students[i].date.year);
        fflush(stdin);
        printf("\n4. Course : ");
        scanf("%[^\n]s",&students[i].course);
    }
    printinfo(students,n);
}
