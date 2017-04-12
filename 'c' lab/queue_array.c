#define LIMIT 4
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ins(int[]);
void del(int[]);
void display(int[]);
int rear=-1,front=-1;
main(){
	char ch;
	int choice;
	int queue[LIMIT];
	printf("\n\t\t\t Array implementation of Queue");
	do{
		printf("\n press \n\n 1 to insert \n 2 to delete");
		printf("\n\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1 : if(rear<LIMIT-1){
					 ins(queue);
					 printf("\n rear = %d\t",rear);
					 display(queue);
					 }
					 else
					 	printf("\n queue is full");
					 break;
			case 2 : if(front<=rear){
				     del(queue);
				     display(queue);
				     }
				     else
				     	printf("\n queue is empty \n");
				     	rear=-1;
				     	front=-1;
				     break;
		}
		printf("\n\n continue? y/n: ");
		fflush(stdin);
		ch=getchar();
	}while(ch!='n');
	printf("\n\n\n\t\t\t\t\t Bye \n\n\n");
	getch();
	return 0;
}
void ins(int q[]){
	++rear;
	printf("\n enter info:");
	scanf("%d",&q[rear]);
	if(front==-1){
		front++;
	}
}
void del(int q[]){
	int i;
	for(i=front;i<rear;i++){
		q[i]=q[i+1];
		rear;
	}
}
void display(int q[]){
	int i;
	for(i=front;i<rear;i++){
		printf("%d ",q[i]);
	}
}
