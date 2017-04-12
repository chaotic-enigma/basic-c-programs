#include<stdio.h>
#include<conio.h>
main()
{
	int res,limit,num,i=1;
	printf("enter num:");
	scanf("%d",&num);
	printf("\n enter the limit:");
	scanf("%d",&limit);
	do
	{
		res=num*i;
		printf("\n\n %d*%d=%d",num,i,res);
		i++;
	}while(i<=limit);
	printf("\n\n end");
	getch();
	return(0);
}
