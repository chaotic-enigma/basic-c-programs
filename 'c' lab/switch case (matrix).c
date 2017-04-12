#include<stdio.h>
#include<conio.h>
main()
{
	int r1,c1,r2,c2,s1[10][10],s2[10][10],r[10][10],i,j,k;
	char c;
	printf("\n\t\t\t\t Matrix Multiplication :-)");
	printf("\n\n enter the rows of 1st matrix: ");
	scanf("%d",&r1);
	printf("\n\n enter the columns of 1st matrix: ");
	scanf("%d",&c1);
	printf("\n\n enter the elements of the 1st matrix: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&s1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",&s1[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n enter the elements of the 2nd matrix: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&s2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",&s2[i][j]);
		}
		printf("\n\n");
	}
	printf("\n press 1 to add \n to substract")
	fflush(stdin);
	scanf("%c",&c);
	switch(c)
	{
		
	}
}
