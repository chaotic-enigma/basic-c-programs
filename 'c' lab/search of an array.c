#include<stdio.h>
#include<conio.h>
main(){
	void arraysearch();
	arraysearch();
	printf("\n\n\n\t\t\t\t Bye");
	getch();
	return(0);
}
void arraysearch(){
	int a[10],i,n,s,c=0;
	printf("\n\t\t\t\t Linear search :-) ");
	printf("\n enter the size of the array :");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	printf("\n enter the value to be searched: ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
    	if(s==a[i]){
    		c=1;
    		break;
		}
	}
	if(c==1){
		printf("\n %d Element found",s);
	}
	else 
	printf("\n %d Element not found",s);
}
