#include<stdio.h>
#include<conio.h>
#define max 3
int q[5];
int front=0;
int rear=-1;
main()
{
    int ch;
    void insert();
    void del();
    void display();
    int c=1;
    printf("\n Circular Queue operations\n");
    do{
	printf("1.insert\n2.delete\n3.display\n4.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: insert();
            break;
        case 2: del();
            break;
        case 3:display();
            break;
        case 4:goto l;
        default:printf("Invalid option\n");
        } 
    }while(c==1);
    l:
	return(0);
}
 
void insert()
{
    int x;
    if((front==0 && rear==max-1)||(front>0 && rear==front-1))
        printf("Queue is overflow\n");
    else
    {
        printf("Enter element to be inserted:");
        scanf("%d",&x);
        if(rear==max-1&&front>0)
        {
            rear=0;
            q[rear]=x;
        }
        else
        {
            q[++rear]=x;
        }
    }
}
void  del()
{
    int a;
    while((front==0)&&(rear==-1))
    {
        printf("Queue is underflow\n");
       break;
    }
    if(front==rear)
    {
        a=q[front];
        rear=-1;
        front=0;
    }
    else
        if(front==max-1)
        {
            a=q[front];
            front=0;
        }
        else a=q[front++];
        printf("Deleted element is:%d\n",a);
}
 
void display()
{
    int i,j;
    while(front==0&&rear==-1)
    {
        printf("Queue is underflow\n");
        break;
    }
    if(front>rear)
    {
        for(i=0;i<=rear;i++)
            printf("\t%d",q[i]);
        for(j=front;j<=max-1;j++)
            printf("\t%d",q[j]);
        printf("\n\t\trear is at position %d i.e  element %d\n",rear+1,q[rear]);
        printf("\n\t\tfront is at position %d i.e element %d\n",front+1,q[front]);
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",q[i]);
        }
        printf("\n\t\trear is at position %d i.e element %d\n",rear+1,q[rear]);
        printf("\n\t\tfront is at position %d i.e element %d\n",front+1,q[front]);
    }
    printf("\n");
}


