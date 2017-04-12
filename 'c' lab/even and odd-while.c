#include<stdio.h>
#include<conio.h>
main()
{
	int m,n,i;
	printf("enter m:");
	scanf("%d",&m);
	printf("\n enter n:");
	scanf("%d",&n);
	i=m;
	printf("\n even numbers are:\n");
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("\n\n%d \t",i);
		}
		i++;
	}
	i=m;
	printf("\n odd numbers are:\n");
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("\n\n%d \t",i);
		}
		i++;
	}
	getch();
	return(0);
}
