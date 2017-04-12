#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n;
	printf("\n enter n : ");
	scanf("%d",&n);
	printf("\n enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return(0);
}
