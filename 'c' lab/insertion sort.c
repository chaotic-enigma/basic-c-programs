#include<stdio.h>
#include<conio.h>
main()
{
	int a[50],i,n,current,comp,temp;
	printf("\n enter n: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the unsorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n insertion sort");
	for(current=1;current<n;current++)
	{
		temp=a[current];
		for(comp=current-1;comp>=0;comp--)
		{
		    if(temp<a[comp])
			   a[comp+1]=a[comp];
		else
		break;
	    }
		a[comp+1]=temp;
	}
	printf("\n elements after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
	return(0);
}
