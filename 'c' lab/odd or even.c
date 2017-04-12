#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	(a%2==0)?printf("\n a is even"):printf("\n a is odd");
	getch();
	return(0);
}
