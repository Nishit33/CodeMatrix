#include<stdio.h>
main()
{
	int n,i,fact=0;
	
	printf("Enter Number : ");  // (for) factorial number (++)
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact+i;
	}
	printf("Factorial Number is : %d",fact);
	
}
