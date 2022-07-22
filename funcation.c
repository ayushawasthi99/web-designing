#include<stdio.h>
void Add(int x , int y);
{
	int a,b,ans;
	printf("\nEnter A = ");
	scanf("%d",&a);
	printf("\nEnter B = ");
	scanf("%d",&b);
	
	ans = a+ b ;
	printf("\nAddition = %d",ans);
}

main()
{
	Add();
	Add();
	Add();
}