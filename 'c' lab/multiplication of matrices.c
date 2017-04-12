#include<stdio.h>
#include<conio.h>
main()
{
	int r1,c1,r2,c2,i,j,k,m1[10][10],m2[10][10],s[10][10];
	printf("\n\t\t\t\t Matrix Multiplication: ");
	printf("\n\n enter the order (rows) of 1st matrix: ");
	scanf("%d",&r1);
	printf("\n\n enter the order (columns) of 1st matrix: ");
	scanf("%d",&c1);
	printf("\n\n enter the elements of the 1st matrix: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n enter the order (rows) of the 2nd matrix: ");
	scanf("%d",&r2);
 	printf("\n\n enter the order (columns) of the 2nd matrix: ");
	scanf("%d",&c2);
	printf("\n\n enter the elements of the 2nd matrix: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n\n");
	}
	if(c1==r2)
	{
		printf("\n\n\t\t Multiplication process");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<(i+j);k++)
				{
						s[i][j]=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("\n\n The resultant matrix is: ");
		printf("\n\n\n");
		for(i=0;i<c1;i++)
		{
			for(j=0;j<r2;j++)
			{
				printf("%d\t",s[i][j]);
			}
			printf("\n\n");
		}
	}
	else
	printf("\n\n please check the order of the matrix :-) ");
	printf("\n\n\t\t\t\t\t Bye ");
	printf("\n\n");
	getch();
	return(0);
}
