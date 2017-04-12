#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,cdigit=0;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		cdigit=cdigit+i;
		n=n/10;
	}
	printf("\n the sum is %d",cdigit);
	printf("\n\n end");
	getch();
	return(0);
}
