#include <stdio.h>
int main()
{
    char c[100];
    int length;
    int count = 0;
    printf("Input the string\n");
    gets(c);
    printf("The Entered string is\n");
    puts(c);
    for( int i = 0; c[i] !='\0'; i++)
    {
        count++;
    }
    printf("The length of String is %d\n", count);
    printf("The reverse of string is\n");

    for( int i = count; i > 0; i--)
    {
    printf("%c", c[i-1]);
    }
    return 0;


}