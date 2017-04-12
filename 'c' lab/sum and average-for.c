#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,num,i,avg,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter num:");
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("\n the sum is %d",sum);
	avg=sum/n;
	printf("\n the average is %d",avg);
	printf("\n\n end");
	getch();
	return(0);
}
