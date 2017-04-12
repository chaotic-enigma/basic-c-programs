#include<stdio.h>
#include<conio.h>
main(){
	void insertionsort();
	insertionsort();
	printf("\n\n\n\n\n\t\t\t\t Bye");
	getch();
}
void insertionsort(){
	int a[20],i,n,current,comp,temp;
	printf("\n\t\t\t\t Insertion sort: ");
	printf("\n\n enter the size of the array: ");
	scanf("%d",&n);
	printf("\n\n enter the elements of the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n entered elaments are: ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n insertion sort process: ");
	for(current=1;current<n;current++){
		temp=a[current];
		for(comp=current-1;comp>=0;comp--){
			if(temp<a[comp])
				a[comp+1]=a[comp];
			else
				break;
		}
		a[comp+1]=temp;
	}
	printf("\n\n the sorted array is: ");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}

