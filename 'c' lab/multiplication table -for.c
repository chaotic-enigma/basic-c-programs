#include<stdio.h>
#include<conio.h>
main()
{
	int res,i,limit,num;
	printf("enter limit:");
	scanf("%d",&limit);
	printf("\n enter num:");
	scanf("%d",&num);
	for(i=1;i<=limit;i++)
	{
		res=num*i;
		printf("\n\n %d*%d=%d",num,i,res);
	}
	printf("\n\n end");
	getch();
	return(0);
}
