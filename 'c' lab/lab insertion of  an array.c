#include<stdio.h>
#include<conio.h>
main(){
	void arrayinsertion();
	arrayinsertion();
	printf("\n\n\n\n\t\t\t\t Bye");
	getch();
}
void arrayinsertion(){
    int a[20],n,element,i,position;
    printf("\n\t\t\t\t Array Insertion: ");
    printf("\n\n enter the size of an array: ");
    scanf("%d",&n);
    printf("\n enter the elements: ");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	printf("\n the entered elements are: ");
	for(i=0;i<n;i++){
		printf("\t %d",a[i]);
	}
	printf("\n\n enter the positon where the element to be inserted: ");
	scanf("%d",&position);
	if(position<=n){
	   printf("\n\n enter the element to be inserted: ");
	   scanf("%d",&element);
	   i=n-1;
	   while(position<=i){
		  a[i+1]=a[i];
		  i--;
	   }
	   a[position]=element;
	   n++;
	   printf("\n\n the elements after inserting the element: ");
	   printf("\n\n");
	   for(i=0;i<n;i++){
		   printf("\t%d",a[i]);
	    }
    }
    else
    printf("\n\n sorry! your position is greater than the size of the array.... please check it");
}

