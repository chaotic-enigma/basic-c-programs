#include<stdio.h>
#include<conio.h>
main()
{
	int fact=1,i=1,n;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		printf("\n the factorial is %d",fact);
		i++;
	}while(i<=n);
	printf("\n\n end");
	getch();
	return(0);
}
