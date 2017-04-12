#include<stdio.h>
#include<conio.h>
main()
{
 int a1[30],a2[30],res[60];
 int i,k,n1,n2;
 printf("\n\t\t\t Merging of Arrays: ");
 printf("\n\n Enter the size of the 1st array :");
 scanf("%d", &n1);
 printf("\n enter the elements : ");
 for (i=0;i<n1;i++)
 {
 	scanf("%d", &a1[i]);
 }
 printf("\n\n the entered elements are : ");
 for (i = 0; i < n1; i++)
 {
 	printf("%d ", a1[i]);
 }
 printf("\n\n Enter the size of the 2nd array :");
 scanf("%d", &n2);
 printf("\n enter the elements : ");
 for (i=0;i<n2;i++)
 {
 	scanf("%d ", &a2[i]);
 }
 printf("\n\n the entered elements are : ");
 for (i=0;i<n2;i++)
 {
 	printf("%d ", a2[i]);
 }
 i = 0;
 k = 0;
 for(i=0;i<n1+n2;i++)
 {
 	if(i>=n1)
    {
 		res[i]=a2[k];
 		k++;
	}
	else
	res[i]=a1[i];
 }
 printf("\n\n Merged array is :");
 for (i=0;i<n1+n2;i++)
 {
 	printf("%d ", res[i]);
 }
 printf("\n\n\t\t\t\t\t bye");
 getch();
 return (0);
 }
