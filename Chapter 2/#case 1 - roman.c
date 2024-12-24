#include<stdio.h>

void romanize(int n) 
{
    if (n <= 0 || n >= 4000) 
    {
        printf("Invalid input. Please enter a number between 1 and 3999.");
        return;
    }

    int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    char s[13][5]= {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;

    while (n > 0) 
    {
        int div = n / num[i];
        while (div--)
            printf("%s", s[i]); 
        n = n % num[i];
        i--;
    }
}

int main() 
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("\nThe Roman numeral of %d = ", n);
    romanize(n);
    return 0;
}
