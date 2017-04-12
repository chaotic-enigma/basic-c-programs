#include<stdio.h>
#include<conio.h>
struct car
{
	char name[10];
	int cost;
};

main()
{
	struct car c1,c2;
	printf("\n\n name of the cars : ");
	fflush(stdin);
	gets(c1.name);
	fflush(stdin);
	gets(c2.name);
	printf("\n\n cost of the cars : ");
	scanf("%d%d",&c1.cost,&c2.cost);
	printf("\n\n name of the cars %s and %s",c1.name,c2.name);
	printf("\n\n cost of the cars %d and %d",c1.cost,c2.cost);
	getch();
	return(0);
}
