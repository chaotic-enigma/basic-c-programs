#include<stdio.h>
#include<conio.h>
main()
{
	int n,num=1,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	numbers:
		sum=sum+num;
		printf("\n the sum is %d",sum);
		num=num+1;
		if(num<=n)
		{
			goto numbers;
		}
		printf("\n\n end");
		getch();
		return(0);
}
