#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter the string ");
    scanf("%s", s);
    char *p;
    p = s;

    printf("The entered String is ");

    while ( *p != '\0')
    {
        printf("%c", *p);
        p++;
    }
 

}