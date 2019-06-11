#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *link;
};
struct Node *front=NULL,*rear=NULL;
void push()
{
 struct Node *ptr;
 ptr=(struct Node*)malloc(sizeof(struct Node));
 printf("\nEnter the data");
 scanf("%d",&ptr->data);
 ptr->link=NULL;
 if(front==NULL&&rear==NULL)
 {
 front= ptr;
 rear=ptr;
 }
 else
 {
 rear->link=ptr;
 }
}
void pop()
{
 struct Node *ptr;
  ptr=front;
  printf("%ditem deleted",ptr->data);
  front=front->link;
  free(ptr);
  }

  void traverse()
  {
  struct Node *ptr;
  ptr=front;
  while(ptr!=NULL)
  {
  printf("%d",ptr->data);
  ptr=ptr->link;
  }
  }
  void main()
  {
   clrscr();
   char ch='y';
   while(ch=='y')
   {
    printf("Enter 1: for push\nEnter 2: for pop\nEnter 3: for traverse");
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
     printf("Invalid input");
     break;
     }

      }
      getch();
      }
