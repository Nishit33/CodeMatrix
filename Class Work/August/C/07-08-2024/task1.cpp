#include<stdio.h>

union myunion{
	int a;
	int b;
	int i;
	
}s1,s2,s3;

main()
{
	printf("Enter Number 1 : ")	;
	scanf("%d",&s1.a);
	
	printf("Enter number 2 : ");
	scanf("%d",&s2.b);
	
	printf("\nAddition : %d",s1.a+s2.b);
	
	
	for(s3.i=1;s3.i<=10;s3.i++)
	{
		printf("\n%d",s3.i);
	}
}
