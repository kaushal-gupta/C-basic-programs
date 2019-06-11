#include<stdio.h>
#include<conio.h>
void Addmatrix()
{
 int a[3][3],b[3][3],i,j,c[3][3];
 printf("Enter the first matrix");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
  }

   printf("\nEnter the second matrix");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
  }
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  c[i][j]=0;
  }
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  c[i][j]=a[i][j]+b[i][j];
  }


  printf("\nThe addition of two matrix is");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  printf("%d",c[i][j]);

  }

}
void Mulmatrix()
{

int a[3][3],b[3][3],i,j,k,c[3][3];
 printf("Enter the first matrix");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
  }

   printf("\nEnter the second matrix");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
  }
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  c[i][j]=0;
  }
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  {
  for(k=0;k<3;k++)
  c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
  }
  printf("\nThe addition of two matrix is");
  for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  printf("%d",c[i][j]);
   printf("\n");

  }
 }


   void main()
   {
   clrscr();
   printf("Enter 1: for addition\n Enter 2: for multiplication");
   int n;
   scanf("%d",&n);
   if(n==1)
   Addmatrix();
   else if (n==2)
   Mulmatrix();
   else
   printf("Invalid input");
   getch();
   }

