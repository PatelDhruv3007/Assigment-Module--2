/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/
#include<stdio.h>

int main()
{
    int b[5]={1,2,3,4,5},i;
    for ( i = 0; i <5; i++)
    {
        printf("\nthe value of b[%d] = %d",i,b[i]);
    }
    
    int row,col ,a[100][100],j,sum=0;
    printf("\nenter the value of row = ");
    scanf("%d",&row);
    
    printf("\nenter the value of col = ");
    scanf("%d",&col);

    for (int  i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
        }    
    }
    int ans[i][j];
    for (int  i = 0; i < row; i++)
    {
        for ( j = 1; j < col; j++)
        {
            sum += a[i][j] ;
        }    
    }
    printf("\nThe addition of the 3 x 3 matrix is = %d",sum);
    
    return 0 ;
}

