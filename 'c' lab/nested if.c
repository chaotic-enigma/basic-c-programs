#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a>0)
	{
		if(a%2==0)
		{
			printf("the number is positive and even");
	    }
		else	
		{
			printf("the number is positive and odd");
		}
		
		
    }
	else
	{
		printf("the number is negative");
	}
	printf("\n\n end");
	getch();
	return(0);
}
