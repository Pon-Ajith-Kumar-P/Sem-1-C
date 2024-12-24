/*Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic: 

If the studente gets first class and he fails in more than 3 
subjects, he does not get any grace. Otherwise, he gets a grace
of 5 marks per subject. 

If the student gets second class and he fails in more than 2 
subjects, he does not get any grace. Otherwise, he gets a grace
of 4 marks per subject. 

If the student gets third class and he fails in more than 1 
subject, then he does not get any grace. Otherwise, he gets a 
grace of 5 marks.*/
#include<stdio.h>
int main()
{
    int g,f;
    printf("\nFirst Class  - 1");
    printf("\nSecond Class - 2");
    printf("\nThird Class  - 3");
    printf("\nEnter you grade : ");
    scanf("%d",&g);
    printf("\nEnter how many subjects you failed : ");
    scanf("%d",&f);
    switch(g)
    {
        case 1:
            if(f<=3)
                printf("\nGrace marks (5 marks) was awarded per subject");
            else
                printf("\nNo Grace was awarded per subject");
            break;
        case 2:
            if(f<=2)
                printf("\nGrace marks (4 marks) was awarded per subject");
            else
                printf("\nNo Grace was awarded per subject");
            break;
        case 3:
            if(f<=1)
                printf("\nGrace marks (5 marks) was awarded per subject");
            else
                printf("\nNo Grace was awarded per subject");
            break;
        default:
            break;
    }


    return 0;
}