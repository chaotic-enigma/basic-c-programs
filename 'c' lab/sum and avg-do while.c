#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,avg,i=1,num,limit;
	printf("enter the limit: ");
	scanf("%d",&limit);
	do
	{
		printf("\n enter num: ");
		scanf("%d",&num);
		sum=sum+num;
    	i++;
	}while(i<=limit);
	printf("\n\n the sum is %d",sum);
	avg=sum/limit;
	printf("\n\n the average is %d",avg);
	getch();
	return(0);
}
