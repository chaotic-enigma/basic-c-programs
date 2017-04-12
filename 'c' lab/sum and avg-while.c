#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0,avg,i=1,num;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n enter num:");
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
	printf("\n the sum is %d",sum);
	avg=sum/n;
	printf("\n the avg is %d",avg);
	printf("\n\n end");
	getch();
	return(0);
}
