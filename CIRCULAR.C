#include<stdio.h>
#include<conio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert();
void delete();
void display();
void main()
{
int ch;
clrscr();
while(1)
{
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("\nInvalid choice");
}
}
getch();
}
void insert()
{
int item;
if((front==0&&rear==MAX-1)||(front==rear+1))
{
printf("\nQueue is full");
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else if(rear==MAX-1)
rear=0;
else
rear=rear+1;
printf("\nEnter the element to be inserted:");
scanf("%d",&item);
queue[rear]=item;
}
void delete()
{
int item;
if(front==-1)
{
printf("\nQueue is empty");
return;
}
item=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==MAX-1)
front=0;
else
front=front+1;
printf("\nThe deleted element is %d",item);
}
void display()
{
int i;
if(front==-1)
{
printf("\nQueue is empty");
return;
}
printf("\nThe elements in the queue are:");
if(rear>=front)
{
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
else
{
for(i=front;i<MAX;i++)
printf("%d\t",queue[i]);
for(i=0;i<=rear;i++)
printf("%d\t",queue[i]);
}
}

