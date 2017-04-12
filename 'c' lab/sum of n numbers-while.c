#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("\n\n the sum=%d",sum);
		i++;
	}
	printf("\n\n end");
	getch();
	return(0);
}
