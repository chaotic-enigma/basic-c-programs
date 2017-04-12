#include<stdio.h>
#include<conio.h>
main()
{
	int fact=1,num=1,n;
		printf("enter n:");
		scanf("%d",&n);
		factorial:
			fact=fact*num;
			printf("\n the factorial is %d",fact);
			num=num+1;
			if(num<=n)
			{
				goto factorial;
			}
			printf("\n\n end");
			getch();
			return(0);
}
