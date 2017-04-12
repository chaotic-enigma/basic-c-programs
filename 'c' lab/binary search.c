#include<stdio.h>
#include<conio.h>
int binarysearch(int *A,int n,int item);
main(){
	int a[10],i,n,item;
	printf("\n\t\t\t\t Binary search :-)");
	printf("\n\n enter the size of array elements: ");
	scanf("%d",&n);
	printf("\n\n enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n enter any random element from the list: ");
	scanf("%d",&item);
	i=binarysearch(a,10,item);
	if(i==-1)
	printf("\n Item not found");
	else
	printf("\n Item is at index:%d",i);
	printf("\n\n\n\t\t\t\t\t Bye");
	getch();
	return(0);
}
int binarysearch(int *A,int n,int item){
	int start=0,end=n-1;
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(item==A[mid]){
			return mid;
		}
		else if(item<A[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
