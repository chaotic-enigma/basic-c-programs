#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int mat[10][10],i,j,order,flag;
	char ch;
	do
	{
		system("cls");
		flag=0;
		printf("\n identity matrix");
		printf("\n\n order:");
		scanf("%d",&order);
		printf("\n enter the elements: \n");
		for(i=0;i<order;i++)
		{
			for(j=0;j<order;j++)
			{
				scanf("%d",&mat[i][j]);
			}
		}
		for(i=0;i<order;i++)
		{
			for(j=0;j<order;j++)
			{
				if((i==j)&&(mat[i][j]!=1))
				{
					flag=1;
					break;
				}
				else if((i!=j)&&(mat[i][j]!=0))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			break;
		}
		printf("\n the entered matrix is: \n\n");
		for(i=0;i<order;i++)
		{
			for(j=0;j<order;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}
		if(flag==1)
		printf("\n not an identity matrix");
		else
		printf("\n identity matrix");
		printf("\ncontinue:");
		fflush(stdin);
		ch=getchar();
	}while(ch=='y');
	printf("\n\n bye");
	getch();
	return(0);
}
