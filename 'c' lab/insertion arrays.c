#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,element,position,n;
	printf("\n enter n: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("\%d",&a[i]);
	}
	printf("\n the elements are: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n enter the position to inserted: ");
	scanf("%d",&position);
	printf("\n enter the element to be inserted: ");
	scanf("%d",&element);
	i=n-1;
	while(position<=i)
	{
	    a[i+1]=a[i];
		i--; 	
	}
	a[position]=element;
	n++;
	printf("\n\n the elements after insertion: ");
    for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf(" \n\n bye");
	getch();
	return(0);
}
