#include<stdio.h>
#include<conio.h>
main()
{
	int fact,i,n;
	fact=1;
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		printf("\n the factorial is %d",fact);
		i++;
	}
	printf("\n\n end");
	getch();
	return(0);
}
