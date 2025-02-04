/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/#include<stdio.h>

int main()
{
    int num=10;
    int  *ptr;

    ptr = &num;

    printf("\nthe original  number of pointer is = %d",num);

    *ptr=20;
    printf("\nthe modify value of pointer is = %d",*ptr);
    return 0 ;
}