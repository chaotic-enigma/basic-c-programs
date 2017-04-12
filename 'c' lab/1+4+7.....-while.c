#include<stdio.h>
#include<conio.h>
main()
{
	int s=0,i=1,n;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		printf("\n the sum is %d",s);
		i=i+3;
	}
	printf("\n\n end");
	getch();
	return(0);
}
