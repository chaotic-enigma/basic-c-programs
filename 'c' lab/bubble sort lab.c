#include<stdio.h>
#include<conio.h>
main(){
	void bubblesort();
	bubblesort();
	printf("\n\n\n\n\n\t\t\t\t Bye");
	getch();
}
void bubblesort(){
	int a[20],temp,i,j,n;
	printf("\n\t\t\t\t Bubble Sort: ");
	printf("\n\n enter the size of the array: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n the entered elements are: ");
	for(i=0;i<n;i++){
		printf("\t %d",a[i]);
	}
	for(i=0;i<n-1;i++){	
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}             
	printf("\n\n the sorted elements are: ");
	for(i=0;i<n;i++){
		printf("\t %d",a[i]);
	}
}

