#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value str1 = ");
	gets(str1);
	printf("\nenter the value str2 = ");
	gets(str2);

    printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);

    strcat(str1,str2);  

    printf("\nthe concatenated string = %s",str1);
    printf("\nthe length of str1 is = %d",strlen(str1));
    
    return 0;
}