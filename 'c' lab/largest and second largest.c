#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,lar1,lar2;
	printf("program to find the largest and second largest of the three numbers");
	printf("\n\n enter the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		lar1=a;
      if(b>c)
      {
      	lar2=b;
      }
	  else
	  {
	    lar2=c;
	  }
    }
    else if((b>a)&&(b>c))
	{
         lar1=b;
	  if(a>c)
	  {
	  	lar2=c;
	  }
	  else
	  {
	  	lar2=a;
	  }
    }
	else if((c>a)&&(c>b))
	{
	  	lar1=c;
	  if(a>b)
	  {
	  	lar2=a;
	  }
	  else
	  {
	  	lar2=b;
	  }
    }
    if((a==b)||(b==c))
    {
    	goto end;
	}
	printf("\n\n the largest number is:%d",lar1);
	printf("\n\n the second largest is:%d",lar2);
	end:
		printf("\n\n\n enter different numbers:");
	getch();
	return(0);
}
