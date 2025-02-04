/* Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/
#include<stdio.h>
int factorial(int num);
int main()
{
    int  num;
    printf("enter the value of num : ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("the factorial of %d is  = %d",num,result);
    return 0 ;
}
int factorial(int num)
{
    int fact=1,i;
    for ( i = 1; i <=num; i++)
    {
        fact = fact *i;
        
    }
    return fact;
    
}
