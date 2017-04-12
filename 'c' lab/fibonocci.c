#include<stdio.h>
#include<conio.h>
main()
{
	int limit,first=0,second=1,next,i;
	printf("enter the limit : ");
	scanf("%d",&limit);
	printf("0 ");
	printf("1 ");
	i=1;
	while(i<=limit-2)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%d ",next);
		i++;
	}
	printf("\n\n bye");
	getch();
	return(0);
}
