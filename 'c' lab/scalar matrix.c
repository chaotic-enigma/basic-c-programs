#include<stdio.h>
#include<conio.h>
main()
{
	void scalarmultiplication();
	scalarmultiplication();
	printf("\n\n\t\t\t\t\t Bye ");
	printf("\n\n");
	getch();
	return(0);
}
void scalarmultiplication()
{
	int r1,c1,i,j,s[10][10],r[10][10],k;
	printf("\n\t\t\t\t Scalar Multiplication: ");
	printf("\n\n enter the order (rows) of the matrix: ");
	scanf("%d",&r1);
	printf("\n\n enter the order (columns) of the matrix: ");
	scanf("%d",&c1);
	printf("\n\n enter the elements of the matrix: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	printf("\n");
	printf("\n\n The entered matrix is: ");
	printf("\n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n enter any number: ");
	scanf("%d",&k);
	printf("\n\n The resultant matrix is: ");
	printf("\n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			r[i][j]=k*s[i][j];
		}
	}
	printf("\n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",r[i][j]);
		}
		printf("\n\n");
	}
}
