/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/

#include<stdio.h>

int main()
{
    FILE *fp1;
	fp1 = fopen("first.txt","w");
	
	fprintf(fp1,"writing a string in file");
	fclose(fp1);
	
    fp1 = fopen("first.txt","r");
	char str[100];
	while(fgets(str,100,fp1))
    {
		printf("%s",str);
    }
    return 0 ;
}