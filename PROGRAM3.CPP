#include<stdio.h>
#include<conio.h>
#define maxsize 10
int Stack[maxsize],top=-1;
void push()
{
if(top==maxsize-1)
printf("\nstack is full");
else
{
top++;
printf("\nEnter the data");
scanf("%d",&Stack[top]);
}
}

void pop()
{
 if(top==-1)
  printf("\nStack is empty");
 else
 {
   printf("%d item deleted\n",Stack[top]);
   top--;
 }
}
void traverse()
{
 for(int i=0;i<=top;i++)
 printf("%d\t",Stack[i]);

}

void main()
{
clrscr();

 char ch='y';
 while(ch=='y')
{
 int a;
 printf("\nEnter 1: for push.\nEnter 2: for pop\nEnter 3: for traverse.");
 scanf("%d",&a);
 if(a==1)
 push();
 else if(a==2)
 pop();
 else if(a==3)
 traverse();
 else if(a!=1&&a!=2&&a!=3)
 {
 printf("\ninvalid input");
 break;
 }


}
getch();
}