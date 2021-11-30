#include<stdio.h>
int main()
{
    int rows, space, k=0;
    printf("Enter the no. of Rows: "); 
    scanf("%d", &rows);                   // Asking user to input no. of rows 
    
    // Generating a nested loop                                      
    for(int i = 1; i <= rows; i++, k=0)   // Controls the rows and makes k=0 whenever this loops gets iterated   
    {
        for( space = 1; space <= rows - i; space++) // Controls the spaces(does the work instead of column)
        {
            printf("  "); 
        }
        while(k != 2 * i -1)   // Formula for printing stars in Pyamid style
        {
            printf("* ");
            k++;
        }
        printf("\n");          // Escape sequence
    }

}