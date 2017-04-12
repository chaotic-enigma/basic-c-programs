#include<stdio.h>
#include<conio.h>
main()
{
	void leftshifting();
	leftshifting();
	printf("\n\n\n\n\n\n\t\t\tThank you           Bye");
	getch();
	return(0);
}
void leftshifting()
{
	int limit,a[20],i,temp;
	printf("\n\t\t\t Left shifting of the elments of the array: ");
	printf("\n\n enter the size of the elements: ");
	scanf("%d",&limit);
	printf("\n enter the elements: ");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n The entered elements are: ");
	for(i=0;i<limit;i++)
	{
		printf("\t%d",a[i]);
	}
	temp=a[0];
	for(i=0;i<limit;i++)
	{
		a[i]=a[i+1];
	}
	a[limit-1]=temp;
	printf("\n\n the elements after shifting: ");
	for(i=0;i<limit;i++)
	{
		printf("\t%d",a[i]);
	}
}
