#include<stdio.h>
#include<conio.h>
main()
{
	char s[10][10];
	int i,n;
	printf("\n enter n : ");
	scanf("%d",&n);
	printf("\n\n enter the strings : ");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(s[i]);
	}
	printf("\n\n the strings are : ");
	for(i=0;i<n;i++)
	{
		printf("\n\n %s",s[i]);
	}
	getch();
	return(0);
}
