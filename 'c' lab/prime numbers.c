#include<stdio.h>
#include<conio.h>
main()
{
	int n,m;int c; int i,j;
	char ch;
  do
  {
 	system("cls");
	printf("program to find the prime numbers between m and n");
	printf("\n enter m: n:");
	scanf("%d %d",&m,&n);
	printf("\n all prime numbers between %d and %d",m,n);
	for(i=m;i<=n;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		printf("\n %d",i);
	}
	printf("\n do you want to continue:");
	fflush(stdin);
    ch=getchar();
   }while(ch=='y');
  getch();
  return(0);
}
