#include<stdio.h>
#include<conio.h>
main()
{
	int num,i=1,limit,res;
	printf("enter num:");
	scanf("%d",&num);
	printf("\n enter the limit: ");
	scanf("%d",&limit);
	while(i<=limit)
	{
		res=num*i;
		printf("\n\n %d*%d=%d",num,i,res);
		i++;
	}
	printf("\n\n end");
	getch();
	return(0);
}
