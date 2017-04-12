#include<stdio.h> 
#include<conio.h>
main(){
   void arraydeletion();
   arraydeletion();
   printf("\n\n\n\t\t\t\t Bye");
   getch();
}
void arraydeletion(){
	int a[20],n,position,i;
	char ch;
	printf("\n\t\t\t\t array deletion: ");
	printf("\n\n enter the size of the array: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n the enetered elements are: ");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	printf("\n\n enter the position where the element to be deleted: ");
	scanf("%d",&position);
	i=position+1;
	printf("\n\n Do you wanna delete the element permanently? (y): ");
	fflush(stdin);
	ch=getchar();
	if(ch!='n'){
		while(i<=n-1){
			a[i-1]=a[i];
			i++;
		}
		n--;
	}
	printf("\n\n the required array after deletion: ");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}

