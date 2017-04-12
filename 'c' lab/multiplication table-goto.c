#include<stdio.h>
#include<conio.h>
main()
{
	int x,y=0,count=1;
	printf("enter x:");
	scanf("%d",&x);
    table:
		y=x*count;
		printf("\n\n %d*%d=%d",x,count,y);
		count=count+1;
		if(count<=10)
		{
			goto table;
		}
		printf("\n\n\n end");
		getch();
		return(0);
}
