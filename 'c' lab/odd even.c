#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],i,n;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n even arrays are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d",a[i]);
		}
	}
	printf("\n odd arrays are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("\n %d",a[i]);
		}
	}
	printf("\n\n bye");
	getch();
	return(0);
}
