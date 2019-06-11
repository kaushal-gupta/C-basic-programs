#include<stdio.h>
#include<conio.h>
#define maxsize 9
int queue[maxsize],front=-1,rear=-1;
  void push()
 {
  if(rear==maxsize-1)
  printf("Overflow");
  else
  {
   if(front==-1)
    front++;
   rear++;
   printf("Enter the data");
   scanf("%d",&queue[rear]);
  }
 }
 void pop()
 {
 if(front==-1&&rear==-1)
 printf("underflow");
 else
 {
  printf("%d item deleted",queue[front]);
  front++;
  if(front>rear)
  {
   front=-1;
   rear=-1;
  }
 }
}
void traverse()
{
int i;
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}

void main()
{
char ch='y';
while(ch=='y')
{
printf("Enter 1: for push.\nEnter 2: for pop.\nEmter 3: for traverse.");
int n;
scanf("%d",&n);
if(n==1)
push();
else if(n==2)
pop();
else if(n==3)
traverse();
else if(n!=1&&n!=2&&n!=3)
{
printf("invalid input");
break;
}

}
getch();
}