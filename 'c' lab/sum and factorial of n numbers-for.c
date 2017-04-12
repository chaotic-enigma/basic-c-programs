#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,num,n,fact=1;
	printf("enter n:");
	scanf("%d",&n);
	for(num=1;num<=n;num++)
	{
		sum=sum+num;
		printf("\n the sum is %d",sum);
		fact=fact*num;
		printf("\n the factorial ia %d",fact);
	}
	getch();
	return(0);
}
