#include<stdio.h>
#include<string.h>
void main()
{
    int vowel = 0;
    char arr[200];
    printf("\nEnter a word or sentence: \n");
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
            ++vowel;
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
            ++vowel;
    }        
    printf("\nTotal number of vowels = %d",vowel);
}
