#include<stdio.h>
#include<string.h>
struct student 
{
	int id;
	char name[20];
	
}
main()
{
	struct student s1[5];
	int i;
	
	for(i=0;i<5;i++)
	{
    printf("\nEnter student ID : ");
	scanf("%d",&s1[i].id);
	printf("Enter Student Name : ");
	scanf("%s",&s1[i].name);

	}
	
for(i=0;i<5;i++)
{
	printf("Student ID : %d",s1[i].id);
	printf("\nStudent Name : %s",s1[i].name);

		}		
}