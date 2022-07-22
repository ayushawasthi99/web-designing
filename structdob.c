#include<stdio.h>
struct date 
{
	int dd;
	int mm;
	int yy;
};
struct student 
{
	int id ;
	char name[20];
	struct date dob;
};
main()
{
	struct student s1;
	printf("\nEnter Student ID : ");
	scanf("%d",&s1.id);
	printf("Enter Student Name :");
	scanf("%s",&s1.name);
	printf("Enter Student Date Of Birth : ");
	scanf("%d %d %d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yy);

	
	printf("\nStudent ID = %d",s1.id);
	printf("\nStudent Name = %s",s1.name);
	printf("\nDate of Birth = %d - %d - %d",s1.dob.dd,s1.dob.mm,s1.dob.yy);
	
}