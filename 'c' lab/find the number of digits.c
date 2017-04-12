#include<stdio.h>
#include<conio.h>
main()
{
	int n,cdigit=0;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		cdigit++;
		n=n/10;
	}
	printf("\n the number of digits are %d",cdigit);
	printf("\n\n end");
	getch();
	return(0);
}

