#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,i=1,n;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		printf("\n\n the sum is %d",sum);
		i++;
	}while(i<=n);
	printf("\n\n end");
	getch();
	return(0);
}
