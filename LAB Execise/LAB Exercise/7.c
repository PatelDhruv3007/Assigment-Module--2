/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/

#include<stdio.h>

int main()
{
    int i;
    //brak statement
    for ( i = 1; i <10; i++)
    {
        if (i==5)
        {
            break;
        }
        printf("\n%d ", i);
    }
    printf("\n");

    //continue statement

    for (i = 1; i <= 10; i++) {
        if (i == 3) 
        {
            continue;
        }
        if (i == 5) 
        {
            break; 
        }
        printf("\n%d ", i);
    }
    return 0 ;
}