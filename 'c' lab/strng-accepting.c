#include<stdio.h>
#include<conio.h>
main()
{
	char name[10];
	printf("\n enter a name : ");
	fflush(stdin);
	gets(name);
	puts(name);
	getch();
	return(0);
}
