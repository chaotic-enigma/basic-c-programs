#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\n the elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
	return(0);
}
