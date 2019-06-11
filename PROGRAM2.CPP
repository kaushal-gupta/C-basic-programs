#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a[3][3];
 int i,j;
  printf("Enter the matrix");
   for(i=0;i<3;i++)
   {
   for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
   }

    printf("The transpose of the matrix is");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d\t",a[j][i]);
    }
    printf("\n");
    }
getch();

  }