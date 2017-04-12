#include<stdio.h>
#include<conio.h>
main(){
	void selectionsort();
	selectionsort();
	printf("\n\n\n\t\t\t\t\t Bye");
	getch();
}
void selectionsort(){
	int i,j,a[20],n,min,pos;
	printf("\n\t\t\t\t Selection Sort");
	printf("\n\n enter the size of the array: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n The entered elements are: ");
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	for(i=0;i<n;i++){
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++){
			if(a[j]<min){
				min=a[j];
				pos=j;
			}
	    }
		if(i!=pos){
				a[pos]=a[i];
				a[i]=min;
		}
	}	
	printf("\n\nThe sorted array is: \n");
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
}

