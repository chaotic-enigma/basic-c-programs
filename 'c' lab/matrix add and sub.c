#include<stdio.h>
#include<conio.h>
main()
{
	int mat1[10][10],mat2[10][10],i,j,nrow,ncol,choice;
	int result[10][10];
	char ch;
	do
   {
	    system("cls");
		printf("\n program for matrix addition and substraction");
		printf("\n\n enter the order:");
		scanf("%d %d",&nrow,&ncol);
		printf("\n enter the elements of mat1:");
		for(i=0;i<nrow;i++)
		{
			for(j=0;j<ncol;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}	
	printf("\n enter the elements of mat2:");
	for(i=0;i<nrow;i++)
	{
		for(j=0;j<ncol;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n press \n 1 for addition \n 2 for substraction");
	printf("\n enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : for(i=0;i<nrow;i++)
		           for(j=0;j<ncol;j++)
		           result[i][j]=mat1[i][j]+mat2[i][j];
		           break;
		case 2 : for(i=0;i<nrow;i++)
		           for(j=0;j<ncol;j++)
		           result[i][j]=mat1[i][j]-mat2[i][j];
		           break;
	}
	printf("\n\n the resultant matrix is: \n");
	for(i=0;i<nrow;i++)
	{
		 for(j=0;j<ncol;j++)
		 {
		 	printf("%d\t\t",result[i][j]);
		 }
		 printf("\n\n");
	}
	  printf("\n continue:");
	  fflush(stdin);
	  scanf("%c",&ch);
    }while(ch=='y');
    getch();
    return(0);
}
