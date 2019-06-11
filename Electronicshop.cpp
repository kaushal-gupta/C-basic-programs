
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>


class shop
{  int id;
   int no;
   long int price;
   char type[50];
   char color[50];
   char brand[50];

     public:
	     void starting();
	     void header();
	     void password();
	     void enterdetails();
	     void displaydetails();
	     void search();
	     void Delete();
	     void modify();
	     void show();
	     shop();
		int getid();
};

	int shop:: getid()
	     { return id;
	     }


	 shop:: shop()
	     { no=0;
	       price=0;
	       id=0;
	       strcpy(type,"");
	       strcpy(color,"");
	       strcpy(brand,"");
	     }



	void shop:: starting()
	{
	  clrscr();
	  cout<<"\n\n\n\n\n";
	  cout<<"\t**************************************************************";
	  cout<<"\n\n\t#                        W.E.L.C.O.M.E                       #";
	  cout<<"\n\n\t#                    Electronic goods store                  #";
	  cout<<"\n\n\t#                                                            #";
	  cout<<"\n\n\t#                                     Made by:-              #";
	  cout<<"\n\n\t#                                             Priyanka       #";
	  cout<<"\n\n\t**************************************************************";
	  cout<<"\n\n\t                  Press enter key to continue        ";

		char a=getch();

		if(!(a==13))
		{
			clrscr();
			shop tp;
			tp.starting();
		}
	}



	void shop:: password()
	{
	  clrscr();
	  int i=0,j;
	  char u_name[10],user;
	  char a[30],password;
	  for(j=0;j<3;j++)
	  {
	    clrscr();
	    gotoxy(20,10);
	    cout<<"Enter Username :: ";
	    gets(u_name);
	    user=strcmp(u_name,"priyanka");
	    if(user==0)
	    { gotoxy(20,12);
	      cout<<"Enter Password :: ";
	      while(i<10)
	      { a[i]=getch();
		cout<<"*";
		if(a[i]==13)
		break;
		i++;
	      }
	    char b[3];
	     for(i=0;i<5;i++)
	    { b[i]=a[i];
	    }
	      password=strcmp(b,"hello");
	      if(password==0)
	      { clrscr();
		gotoxy(30,12);
		cout<<"Successflly loged in";
		getch();
		header();
		break;
	      }
	      else
	      { gotoxy(28,14);
		cout<<"Wrong Password";
		getch();
	      }
	    }
	   else
	   { gotoxy(28,14);
	     cout<<"Wrong Username";
	     getch();
	   }
	  }
	}


	void shop::header()
       {
	clrscr();
	int option;
	cout<<"\n\n\t\t***********M.A.I.N - M.E.N.U**************";
	cout<<"\n\n\n\t\t\t 1.Display items";
	cout<<"\n\n\n\t\t\t 2.Enter item details";
	cout<<"\n\n\n\t\t\t 3.Search";
	cout<<"\n\n\n\t\t\t 4.Delete";
	cout<<"\n\n\n\t\t\t 5.Modify";
	cout<<"\n\n\n\t\t\t 6.Exit";
	cout<<"\n\n\n\t\t\t Enter your option: ";
	cin>>option;
	switch(option)
	{ case 1: displaydetails();
	  break;
	  case 2: enterdetails();
	  break;
	  case 3: search();
	  break;
	  case 4: Delete();
	  break;
	  case 5: modify();
	  break;
	  case 6: exit(0);
	  break;
	  default:cout<<"invalid";
	 }

      }

	void shop:: enterdetails()

	{
	  clrscr();
	  shop sh;
	  gotoxy(10,5);
	  cout<<"\t\t\tEnter Details";
	  cout<<"\n\t 1.Id number: ";
	  cin>>sh.id;
	  cout<<"\n\t 2.Type: ";
	  gets(sh.type);
	  cout<<"\n\t 3.Color: ";
	  gets(sh.color);
	  cout<<"\n\t 4.Brand: ";
	  gets(sh.brand);
	  cout<<"\n\t 5.Price: ";
	  cin>>sh.price;
	  cout<<"\n\t 6.Number of items: ";
	  cin>>sh.no;
	  fstream tp("project2.dat",ios::app|ios::binary);
	  cout<<"Enter any key to save";
	  getch();
	  tp.write((char*)&sh,sizeof(sh));
	  tp.close();

	show();
	}


void shop::show()
{
	 clrscr();
	  cout<<"\n\n\t\t\t1.Main Menu";
	  cout<<"\n\n\t\t\t2.Exit";
	  cout<<"\n\n\t\t\t Enter your option: ";
	  int g;
	  cin>>g;
	  if(g==1)
	  {
	   header();
	  }
	  else if(g==2)
	  {
		exit(0);
	  }
	  else
	  cout<<"Wrong Option";
	 }



	void shop:: displaydetails()
	{
	  clrscr();
	  gotoxy(32,1);
	  cout<<"Details";
	  gotoxy(1,3);
	  cout<<"Id no";
	  gotoxy(15,3);
	  cout<<"Type ";
	  gotoxy(30,3);
	  cout<<"Color ";
	  gotoxy(45,3);
	  cout<<"Brand ";
	  gotoxy(58,3);
	  cout<<"Price ";
	  gotoxy(70,3);
	  cout<<"Items left ";
	  int x,y;
	  shop sh;
	  fstream ta("project2.dat",ios::in|ios::binary);
	  y=5;
	  while(ta.read((char*)&sh,sizeof(sh)))
	  {
	    gotoxy(1,y);
	    cout<<sh.id;
	    gotoxy(15,y);

	    cout<<sh.type;
	    gotoxy(30,y);
	    cout<<sh.color;
	    gotoxy(45,y);
	    cout<<sh.brand;
	    gotoxy(58,y);
	    cout<<sh.price;
	    gotoxy(70,y);
	    cout<<sh.no;
	    y=y+2;
	  }
	  ta.close();
	cout<<"\n\nEnter any key to back";

	  getch();
		show();
	}


	void shop::search()
	{
	 clrscr();
	  shop s1;
	  int idno;
	  char found='n';
	  fstream file("project2.dat",ios::binary|ios::in);
	  gotoxy(10,5);
	  cout<<"Enter the id no to be searched for";
	  cin>>idno;
	  while(file.read((char*)&s1,sizeof(s1)))
	  {
	    if(s1.getid()==idno)
	    {
	      gotoxy(10,5);
	      cout<<"\t\t\tItem Details";
	      cout<<"\n\t 1.Id number: "<<s1.id;
	      cout<<"\n\t 2.Type: "<<s1.type;
	      cout<<"\n\t 3.Color: "<<s1.color;
	      cout<<"\n\t 4.Brand: "<<s1.brand;
	      cout<<"\n\t 5.Price: "<<s1.price;
	      cout<<"\n\t 6.Number of items: "<<s1.no;
	      found='y';
		cout<<"\n\nEnter any key to back";
		getch();
		show();
	    }
	  }
	  if(found=='n')
	  {
	  cout<<"\n\tId no not found in file!!!"<<endl;
	 getch();

	 }

	file.close();
	cout<<"Enter any key to back";
	getch();
		show();

	}

void shop:: Delete()
	{ clrscr();
	  shop s2,s3;
	  fstream fio("project2.dat",ios::in);
	 ofstream fil("temp.dat");
	  int idno;
	  char found='f';
	  char confirm='n';
	  gotoxy(10 ,5);
	  cout<<"Enter id no of item which is to be deleted\n";
	  cin>>idno;
	  while(!fio.eof())
	  {
	   fio.read((char*)&s2,sizeof(s2));
	    if(s2.getid()==idno)
	    { gotoxy(10,5);
	      cout<<"\t\t\tItem Details";
	      cout<<"\n\t 1.Id number: "<<s2.id;
	      cout<<"\n\t 2.Type: "<<s2.type;
	      cout<<"\n\t 3.Color: "<<s2.color;
	      cout<<"\n\t 4.Brand: "<<s2.brand;
	      cout<<"\n\t 5.Price: "<<s2.price;
	      cout<<"\n\t 6.Number of items: "<<s2.no;
	      found='t';
	      cout<<"\n\n\n\nAre you sure you want to delete this record? (y or n)..";
	      cin>>confirm;
	      if(confirm=='n')
	      fil.write((char*)&s2,sizeof(s2));
	    }
	   else
	    fil.write((char*)&s2,sizeof(s2));
	  }
	  if(found=='f')
	  cout<<"Record not found!!\n";


	 if(remove("project2.dat")==0)

       if(rename("temp.dat", "project2.dat")==0)
	  cout<<"Record refreshed";
	  getch();
	  displaydetails();

	 }



	void shop:: modify()
	{
	  clrscr();
	  cout<<"Enter new details"<<endl;
	  char t[20]="";
	  char c[20]="";
	  char b[20]="";
	  float p;
	  int n;
	  cout<<"\n\t 2.New Type:(Enter'.'to retain old one) ";
	  gets(t);
	  cout<<"\n\t 3.Color:(Enter '.' to retain old one) ";
	  gets(c);
	  cout<<"\n\t 4.Brand:(Enter '.' to retain old one) ";
	  gets(b);
	  cout<<"\n\t 5.Price:(Enter '1' to retain old one) ";
	  cin>>p;
	  cout<<"\n\t 6.Number of items:(Enter '1' to retain old one) ";
	  cin>>n;
	  if (strcmp(t,".")!=0)
	     strcpy(type,t);
	  if(strcmp(c,".")!=0)
	     strcpy(color,c);
	  if(strcmp(b,".")!=0)
	     strcpy(brand,b);
	  if(p!=1)
	     price=p;
	  if(n!=0)
	     no=n;
	cout<<"Enter any key to back";
	getch();
	show();

}
void main()
{ clrscr();
  shop s;
  s.starting();
  s.password();
  getch();
}

