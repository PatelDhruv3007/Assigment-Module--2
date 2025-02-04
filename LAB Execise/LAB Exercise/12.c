/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/
#include<stdio.h>
    struct Student
{
	char name[100];
    int roll_number;
	int marks;
};
int main()
{
    struct Student s[3];
    
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nEnter the name = ");
		scanf(" %s",&s[i].name);
		printf("\nEnter the roll number = ");
		scanf("%d",&s[i].roll_number);
		printf("\nEnter the marks = ");
		scanf(" %d",&s[i].marks);
	}
    printf("\nStudent Details:\n");
	for(i=0;i<3;i++)
	{
		printf("\nName = %s",s[i].name);
		printf("\nRoll number = %d",s[i].roll_number);
		printf("\nMarks = %d\n",s[i].marks);
	}
    return 0 ;
}