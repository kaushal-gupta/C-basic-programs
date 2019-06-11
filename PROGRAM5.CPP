#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 struct Node
 {
  int data;
   struct Node *link;
   };
   struct Node *top=NULL;
   void push()
   {
   struct Node *ptr;
   ptr=(struct Node*)malloc(sizeof(struct Node));
   printf("Enter The data ");
   scanf("%d",&ptr->data);
   ptr->link=top;
   top=ptr;
   }

   void pop()
   {
    if(top==NULL)
    printf("underflow");
     else
     {
      struct Node *ptr;
      ptr=top;
      printf("%d item deleted",top->data);
      top=top->link;
      free(ptr);
      }
   }
   void traverse()
   {
    struct Node *ptr;
     ptr=top;
     while(ptr!=NULL)
     {
     printf("%dItem deleted",ptr->data);
     top=top->link;
     free(ptr);
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
	 else  if(n==2)
	 pop();
	 else if(n==3)
	 traverse();
	 else if(n!=1&&n!=2&&n!=3)
	 {
	 printf("invalid input bye");
	 break;
	 }
      }
      getch();
    }


