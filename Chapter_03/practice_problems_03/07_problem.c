// Write a program to determine whether a character entered by the user is lowercase or uppercase.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else
    {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}