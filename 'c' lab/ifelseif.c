#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("\n a is greater %d",a);
	}
	else
	{
		printf("\n b is greater %d",b);
	}
	if(a==b)
	{
		printf("equal");
	}
	getch();
	return(0);
	
}
