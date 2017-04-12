#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],temp,flag,i,n;
	printf("\n enter the size: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n\n the elements before sorting: ");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	while(1)
	{
		flag=0;
		for(i=0;i<=n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	printf("\n\n the elements after sorting: ");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	printf("\n\n bye");
	getch();
	return(0);
}
