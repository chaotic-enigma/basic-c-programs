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
	if(a<b)
	{
		printf("\n b is greater %d",b);
	}
	else
	{
		printf("equal");
	}
	getch();
	return(0);
}
