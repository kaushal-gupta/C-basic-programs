/*
Program Title : Modern Periodic Table & Structure of Hydrocarbons
Programmer    : Navdeep
E-Mail	      : navdeep001star@gmail.com
*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
class element_info
{       private:
		char name[20],new_name[20];
		char symbol[5],new_symbol[5];
		int atomic_no,new_atomic_no;
		float atomic_mass,new_atomic_mass;
		int group,new_group;
		int period,new_period;
		char electro_config[50],new_electro_config[50];
		char remarks[10],new_remarks[10];
		char ch;
	public:
		void get_element_info();
		void display_element_info();
		int get_atomic_no();
		void modify();
}element;
void element_info::get_element_info()
{
	clrscr();
	cleardevice();
	setbkcolor(5);
	setcolor(14);
	outtextxy(220,55,"- - - R E C O R D - - -");
	cout<<"\n\n\n\n\n\n\n\tEnter element name : ";
	gets(name);
	cout<<"\tEnter Symbol of the Element : ";
	gets(symbol);
	cout<<"\tEnter Atomic Number : ";
	cin>>atomic_no;
	cout<<"\tEnter Atomic Mass : ";
	cin>>atomic_mass;
	cout<<"\tEnter the Group from which the Element belong : ";
	cin>>group;
	cout<<"\tEnter the Period from which the Element belong : ";
	cin>>period;
	cout<<"\tEnter the Electronic Configuration of the Element : ";
	gets(electro_config);
	cout<<"\tEnter Remarks for the Element : ";
	gets(remarks);
	clearviewport();
}
void element_info::display_element_info()
{
	clrscr();
	cleardevice();
	setbkcolor(5);
	setcolor(10);
	outtextxy(170,70,"E L E M E N T    I N F O R M A T I O N");
	cout<<"\n\n\n\n\n\n\n\n\n\t     Element Name             : "<<name;
	cout<<"\n\n\t     Element Symbol           : "<<symbol;
	cout<<"\n\n\t     Atomic Number            : "<<atomic_no;
	cout<<"\n\n\t     Atomic Mass              : "<<atomic_mass;
	cout<<"\n\n\t     Group                    : "<<group;
	cout<<"\n\n\t     Period                   : "<<period;
	cout<<"\n\n\t     Electronic Configuration : "<<electro_config;
	cout<<"\n\n\t     Remarks                  : "<<remarks;
	setcolor(14);
	rectangle(80,120,560,400);
}
int element_info::get_atomic_no()
{
	return atomic_no;
}
void element_info::modify()
{
	display_element_info();
	getch();
	clrscr();
	cleardevice();
	outtextxy(180,180,"Enter the New Details of the Element");
	sleep(5);
	clrscr();
	cleardevice();
	setbkcolor(5);
	setcolor(14);
	outtextxy(220,55,"- - - R E C O R D - - -");
	cout<<"\n\n\n\n\n\n\n\tEnter element name : ";
	gets(new_name);
	cout<<"\tEnter Symbol of the Element : ";
	gets(new_symbol);
	cout<<"\tEnter Atomic Number : ";
	cin>>new_atomic_no;
	cout<<"\tEnter Atomic Mass : ";
	cin>>new_atomic_mass;
	cout<<"\tEnter the Group from which the Element belong : ";
	cin>>new_group;
	cout<<"\tEnter the Period from which the Element belong : ";
	cin>>new_period;
	cout<<"\tEnter the Electronic Configuration of the Element : ";
	gets(new_electro_config);
	cout<<"\tEnter Remarks for the Element : ";
	gets(new_remarks);
	if(strcmp(new_name,name)!=0)
		strcpy(name,new_name);
	if(strcmp(new_symbol,symbol)!=0)
		strcpy(symbol,new_symbol);
	if(new_atomic_no!=atomic_no)
		atomic_no=new_atomic_no;
	if(new_atomic_mass!=atomic_mass)
		atomic_mass=new_atomic_mass;
	if(new_group!=group)
		group=new_group;
	if(new_period!=period)
		period=new_period;
	if(strcmp(new_electro_config,electro_config)!=0)
		strcpy(electro_config,new_electro_config);
	if(strcmp(new_remarks,remarks)!=0)
		strcpy(remarks,new_remarks);
}
class modern_periodic_table_and_structures
{       private:
		int i,j,x,y,z,nb,option,seconds;
		char pswrd[10],choice;
		char found;
		int req_atomic_no;
	public:
		void intro_I();
		void intro_II();
		void password();
		void main_menu();
		void display_menu();
		void create_edit_display_menu();
		void periodic_table();
		void display_se();
		void display_ae();
		void struct_hydrocarbons();
		void alkane();
		void alkene();
		void alkyne();
		void ask_auto();
		void automatic();
		void user_driven();
		void confirm_exit();
		void default_choice();
		void create_element_record();
		void modify_element_record();
		void delete_element_record();
		void search_by_atomic_no();
		void execute_automatically();
};
void modern_periodic_table_and_structures::intro_I()
{       sleep(1);
	for(x=-25,i=230,y=375,z=-105;x<=170,i>=35,y>=180,z<=90;x++,i--,y--,z++)
	{
		cleardevice();
		setbkcolor(4);
		setcolor(11);
		outtextxy(118,z,"Navdeep");
		setcolor(10);
		outtextxy(140,z+25,"&");
		setcolor(11);
		outtextxy(125,z+50,"Vikas");
		setcolor(9);
		outtextxy(i+50,y,"PROUDLY PRESENT");
		setcolor(15);
		outtextxy(i,z+150,"Computer Science Project on");
		setcolor(14);
		outtextxy(i,z+180,"Modern Periodic Table & Structure of Hydrocarbons");
		setcolor(10);
		outtextxy(x,380,"Under guidance of our Respected teacher Ms. Deepika Garg");
		outtextxy(x+275,400,"(PGT COMPUTER SCIENCE)");
		delay(5);
	}
	sleep(1);
	setcolor(11);
	setlinestyle(DASHED_LINE,3,THICK_WIDTH);
	rectangle(10,10,630,465);
	setcolor(15);
	setlinestyle(DOTTED_LINE,1,NORM_WIDTH);
	line(30,282,430,282);
	sleep(4);
	clearviewport();
	intro_II();
}
void modern_periodic_table_and_structures::intro_II()
{
	setbkcolor(6);
	sleep(1);
	for(x=45,y=5,i=405;x<=230,y<=190,i>=220;x++,y++,i--)
	{
		cleardevice();
		setcolor(14);
		outtextxy(x,160,"Modern Periodic Table");
		outtextxy(310,y,"&");
		outtextxy(i,220,"Structure of Hydrocarbons");
		delay(5);
	}
	sleep(1);
	setcolor(2);
	outtextxy(10,340,"DEVELOPED BY :");
	outtextxy(10,390,"SCHOOL  :");
	setcolor(15);
	sleep(1);
	outtextxy(125,340,"Navdeep");
	outtextxy(125,360,"Vikas");
	outtextxy(90,390,"Bal Mandir Sr. Sec. School");
	sleep(2);
	setcolor(10);
	outtextxy(10,420,"Don't press any key program is loading (:");
	moveto(340,420);
	for(i=1;i<=8;i++)
	{
		outtext(" . .");
		sleep(1);
	}
	setcolor(11);
	circle(310,442,8);		//first smiley
	outtextxy(305,434,".");
	outtextxy(310,434,".");
	settextstyle(DEFAULT_FONT,VERT_DIR,1);
	outtextxy(315,440,"(");

	circle(460,442,8);		//second smiley
	outtextxy(460,435,".");
	outtextxy(465,435,".");
	outtextxy(465,440,"(");
	sleep(1);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(330,440,"PROGRAM LOADED");
	sleep(2);
	clearviewport();
	password();
}
void modern_periodic_table_and_structures::password()
{
	setbkcolor(12);
	setcolor(2);
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	outtextxy(420,70,"Press Enter to continue");
	outtextxy(50,190,"Enter the P a s s w o r d : ");
	setcolor(14);
	outtextxy(300,150,"LOGIN");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(8)<<"";
	rectangle(50,205,150,225);
	cin>>pswrd;
	setcolor(14);
	if(strcmp(pswrd,"abcd")==0)
	{
		outtextxy(50,250,"<<<< You are Authorized User >>>>");
		sleep(2);
		main_menu();
	}
	else
	{
		outtextxy(50,250,"<<<< Invalid P A S S W O R D >>>>");
		outtextxy(50,270,"<<<< You are Not an Authorized User >>>>");
		sleep(2);
		exit(1);

	}
       sleep(2);
       clearviewport();
}
void modern_periodic_table_and_structures::main_menu()
{
	clrscr();
	setbkcolor(1);
	for(y=10;y<=162;y++)
	{
		cleardevice();
		setcolor(14);
		outtextxy(272,y,"MAIN MENU");
		delay(8);
	}

	setlinestyle(DOTTED_LINE,2,THICK_WIDTH);
	for(i=415,j=205;i>=265,j<=355;i-=45,j+=45)
	{
		line(j,150,j+45,150);
		line(i,180,i-45,180);
		sleep(1);
	}
	setcolor(11);
	outtextxy(60,220,"1. DISPLAY MENU");
	outtextxy(60,250,"2. CREATE/EDIT/DELETE MENU");
	outtextxy(60,280,"3. EXIT");
	setcolor(10);
	sleep(1);
	outtextxy(80,310,"Please select your option (1-3)");
	outtextxy(420,70,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(12)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(80,330,123,355);
	cin>>option;
	switch(option)
	{
		case 1: display_menu();
			break;
		case 2: create_edit_display_menu();
			break;
		case 3: confirm_exit();
			break;
		default:default_choice();
			main_menu();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::display_menu()
{
	clrscr();
	setbkcolor(1);
	for(y=400;y>160;y--)
	{
		cleardevice();
		setcolor(14);
		outtextxy(270,y,"DISPLAY MENU");
		delay(5);
	}
	setlinestyle(DOTTED_LINE,2,THICK_WIDTH);
	for(i=415,j=205;i>=265,j<=355;i-=45,j+=45)
	{
		line(j,150,j+45,150);
		line(i,180,i-45,180);
		sleep(1);
	}
	setcolor(11);
	outtextxy(60,220,"1. PERIODIC TABLE");
	outtextxy(60,250,"2. Display SINGLE ELEMENT");
	outtextxy(60,280,"3. Structures of HYDROCARBONS");
	outtextxy(60,310,"4. Display ALL ELEMENTS");
	outtextxy(60,340,"5. Back To MAIN MENU");
	setcolor(10);
	sleep(1);
	outtextxy(80,365,"Please select your option (1-3)");
	outtextxy(420,70,"Press Zero(0) to exit");
	outtextxy(420,90,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(12)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(80,380,123,405);
	cin>>option;
	switch(option)
	{
		case 1:	periodic_table();
			break;
		case 2:	display_se();
			break;
		case 3: struct_hydrocarbons();
			break;
		case 4:	display_ae();
			break;
		case 5: main_menu();
			break;
		case 0: confirm_exit();
			break;
		default:default_choice();
			display_menu();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::periodic_table()
{
	setbkcolor(5);
	for(y=10;y<=50;y++)
	{
		cleardevice();
		setcolor(11);
		outtextxy(235,y,"THE PERIODIC TABLE");
		setcolor(10);
		outtextxy(25,y+50,"s-Block");
		outtextxy(230,y+140,"d-Block");
		outtextxy(500,y+50,"p-Block");
		outtextxy(270,y+320,"f-Block");
		outtextxy(60,y+350,"Lanthanides");
		outtextxy(60,y+380,"Actinides");
		delay(10);
	}
	setcolor(3);
	setlinestyle(DOTTED_LINE,2,THICK_WIDTH);
	for(i=415,j=195;i>=195,j<=355;i-=45,j+=45)
	{
		line(j,40,j+45,40);
		line(i,70,i-45,70);
		sleep(1);
	}
	sleep(1);
	setcolor(11);
	setlinestyle(SOLID_LINE,3,NORM_WIDTH);
	rectangle(15,80,90,330);	//s-Block
	rectangle(100,170,420,330);	//p-Block
	rectangle(430,80,620,330);	//d-Block
	rectangle(45,350,575,450);	//f-Block
	sleep(1);
	setcolor(14);
	//Group 1
	outtextxy(30,130,"H");
	outtextxy(30,160,"Li");
	outtextxy(30,190,"Na");
	outtextxy(30,220,"K");
	outtextxy(30,250,"Rb");
	outtextxy(30,280,"Cs");
	outtextxy(30,310,"Fr");

	//Group 2
	outtextxy(60,160,"Be");
	outtextxy(60,190,"Mg");
	outtextxy(60,220,"Ca");
	outtextxy(60,250,"Sr");
	outtextxy(60,280,"Ba");
	outtextxy(60,310,"Ra");

	//Group 3
	outtextxy(120,220,"Sc");
	outtextxy(120,250,"Y");
	outtextxy(120,280,"La");
	outtextxy(120,310,"Ac");

	//Group 4
	outtextxy(150,220,"Ti");
	outtextxy(150,250,"Zr");
	outtextxy(150,280,"Hf");
	outtextxy(150,310,"Rf");

	//Group 5
	outtextxy(180,220,"V");
	outtextxy(180,250,"Nb");
	outtextxy(180,280,"Ta");
	outtextxy(180,310,"Db");

	//Group 6
	outtextxy(210,220,"Cr");
	outtextxy(210,250,"Mo");
	outtextxy(210,280,"W");
	outtextxy(210,310,"Sg");

	//Group 7
	outtextxy(240,220,"Mn");
	outtextxy(240,250,"Tc");
	outtextxy(240,280,"Re");
	outtextxy(240,310,"Bh");

	//Group 8
	outtextxy(270,220,"Fe");
	outtextxy(270,250,"Ru");
	outtextxy(270,280,"Os");
	outtextxy(270,310,"Hs");

	//Group 9
	outtextxy(300,220,"Co");
	outtextxy(300,250,"Rh");
	outtextxy(300,280,"Ir");
	outtextxy(300,310,"Mt");

	//Group 10
	outtextxy(330,220,"Ni");
	outtextxy(330,250,"Pd");
	outtextxy(330,280,"Pt");
	outtextxy(330,310,"Ds");

	//Group 11
	outtextxy(360,220,"Cu");
	outtextxy(360,250,"Ag");
	outtextxy(360,280,"Au");
	outtextxy(360,310,"Rg");

	//Group 12
	outtextxy(390,220,"Zn");
	outtextxy(390,250,"Cd");
	outtextxy(390,280,"Hg");
	outtextxy(390,310,"Cn");

	//Group 13
	outtextxy(440,160,"B");
	outtextxy(440,190,"Al");
	outtextxy(440,220,"Ga");
	outtextxy(440,250,"In");
	outtextxy(440,280,"Tl");
	outtextxy(440,310,"Uut");

	//Group 14
	outtextxy(470,160,"C");
	outtextxy(470,190,"Si");
	outtextxy(470,220,"Ge");
	outtextxy(470,250,"Sn");
	outtextxy(470,280,"Pb");
	outtextxy(470,310,"Uuq");

	//Group 15
	outtextxy(500,160,"N");
	outtextxy(500,190,"P");
	outtextxy(500,220,"As");
	outtextxy(500,250,"Sb");
	outtextxy(500,280,"Bi");
	outtextxy(500,310,"Uup");

	//Group 16
	outtextxy(530,160,"O");
	outtextxy(530,190,"S");
	outtextxy(530,220,"Se");
	outtextxy(530,250,"Te");
	outtextxy(530,280,"Po");
	outtextxy(530,310,"Uuh");

	//Group 17
	outtextxy(560,160,"F");
	outtextxy(560,190,"Cl");
	outtextxy(560,220,"Br");
	outtextxy(560,250,"I");
	outtextxy(560,280,"At");
	outtextxy(560,310,"Uus");

	//Group 18
	outtextxy(590,130,"He");
	outtextxy(590,160,"Ne");
	outtextxy(590,190,"Ar");
	outtextxy(590,220,"Kr");
	outtextxy(590,250,"Xe");
	outtextxy(590,280,"Rn");
	outtextxy(590,310,"Uuo");

	//Lanthanides & Actinides
	outtextxy(155,400,"Ce");
	outtextxy(185,400,"Pr");
	outtextxy(215,400,"Nd");
	outtextxy(245,400,"Pm");
	outtextxy(275,400,"Sm");
	outtextxy(305,400,"Eu");
	outtextxy(335,400,"Gd");
	outtextxy(365,400,"Tb");
	outtextxy(395,400,"Dy");
	outtextxy(425,400,"Ho");
	outtextxy(455,400,"Er");
	outtextxy(485,400,"Tm");
	outtextxy(515,400,"Yb");
	outtextxy(545,400,"Lu");
	outtextxy(155,430,"Th");
	outtextxy(185,430,"Pa");
	outtextxy(215,430,"U");
	outtextxy(245,430,"Np");
	outtextxy(275,430,"Pu");
	outtextxy(305,430,"Am");
	outtextxy(335,430,"Cm");
	outtextxy(365,430,"Bk");
	outtextxy(395,430,"Cf");
	outtextxy(425,430,"Es");
	outtextxy(455,430,"Fm");
	outtextxy(485,430,"Md");
	outtextxy(515,430,"No");
	outtextxy(545,430,"Lr");

	setcolor(10);
	outtextxy(129,273,"*");
	outtextxy(125,302,"**");
	getch();
	display_menu();
	clearviewport();
}
void modern_periodic_table_and_structures::display_se()
{
	clrscr();
	cleardevice();
	setbkcolor(9);
	for(x=550;x>=60;x--)
	{
		cleardevice();
		setcolor(12);
		outtextxy(x,160,"SEARCH BY");
		delay(5);
	}
	setlinestyle(DASHED_LINE,2,THICK_WIDTH);
	for(i=60;i<=380;i+=80)
	{
		setcolor(11);
		line(i,150,i+80,150);
		line(i,180,i+80,180);
		sleep(1);
	}
	setcolor(14);
	outtextxy(60,220,"1. Atomic Number");
	outtextxy(60,250,"2. Back to Previous Menu");
	outtextxy(60,280,"3. Back to MAIN MENU");
	sleep(1);
	setcolor(11);
	outtextxy(80,300,"Please select your option (1-3)");
	outtextxy(420,70,"Press Zero(0) to exit");
	outtextxy(420,90,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(12)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(80,315,123,340);
	cin>>option;
	switch(option)
	{
		case 1: user_driven();
			break;
		case 2:	display_menu();
			break;
		case 3: main_menu();
			break;
		case 0: confirm_exit();
			break;
		default:default_choice();
			display_se();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::display_ae()
{
	clrscr();
	cleardevice();
	setbkcolor(9);
	for(x=550;x>=60;x--)
	{
		cleardevice();
		setcolor(12);
		outtextxy(x,160,"Display ALL Elements with Details");
		delay(5);
	}
	setlinestyle(DASHED_LINE,2,THICK_WIDTH);
	for(i=60;i<=380;i+=80)
	{
		setcolor(11);
		line(i,150,i+80,150);
		line(i,180,i+80,180);
		sleep(1);
	}
	setcolor(14);
	outtextxy(60,220,"1. Automatically");
	outtextxy(60,250,"2. User Driven");
	outtextxy(60,280,"3. Back to Previous Menu");
	outtextxy(60,310,"4. Back to MAIN MENU");
	sleep(1);
	setcolor(11);
	outtextxy(80,335,"Please select your option (1-4)");
	outtextxy(420,70,"Press Zero(0) to exit");
	outtextxy(420,90,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(12)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(80,350,123,370);
	cin>>option;
	switch(option)
	{
		case 1: ask_auto();
			break;
		case 2: user_driven();
			break;
		case 3:	display_menu();
			break;
		case 4: main_menu();
			break;
		case 0: confirm_exit();
			break;
		default:default_choice();
			display_ae();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::search_by_atomic_no()
{
	clrscr();
	cleardevice();
	found='n';
	setbkcolor(5);
	for(int x=-15,y=5;x<=80,y<=100;x++,y++)
	{
		cleardevice();
		setcolor(10);
		outtextxy(x,y,"Enter the Atomic Number of the Element");
		delay(7);
	}
	setcolor(14);
	setlinestyle(SOLID_LINE,2,NORM_WIDTH);
	line(540,1,540,500);
	line(570,1,570,500);
	line(600,1,600,500);
	line(1,380,640,380);
	line(1,410,640,410);
	line(1,440,640,440);
	cout<<"\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	rectangle(180,123,270,148);
	cin>>req_atomic_no;
	ifstream read;
	read.open("element_information.dat",ios::binary|ios::in);
	while(!read.eof())
	{
		read.read((char*)&element,sizeof(element));
		if(element.get_atomic_no()==req_atomic_no)
		{
			element.display_element_info();
			found='y';
			break;
		}
	}
	if(found=='n')
		outtextxy(80,220,"Entered Atomic Number Not Found in the Database");
	read.close();
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::user_driven()
{
	do
	{
		search_by_atomic_no();
		clrscr();
		cleardevice();
		setbkcolor(5);
		setcolor(14);
		outtextxy(212,170,"Do you want to search more");
		outtextxy(205,190," elements from the Databases ?");
		outtextxy(271,220,"es");
		outtextxy(378,220,"o");
		setcolor(10);
		outtextxy(261,220,"Y");
		outtextxy(370,220,"N");
		setcolor(11);
		rectangle(180,150,470,250);	//inner
		rectangle(170,140,480,260);	//outer
		rectangle(245,210,300,235);	//yes
		rectangle(350,210,405,235);	//no
		sleep(1);
		setcolor(10);
		outtextxy(190,310,"Please select your option");
		setcolor(11);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
		setlinestyle(SOLID_LINE,0,NORM_WIDTH);
		rectangle(200,330,245,355);
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	sleep(1);
	display_menu();
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::ask_auto()
{
	clrscr();
	cleardevice();
	setbkcolor(1);
	setcolor(4);
	outtextxy(80,100,"CAUTION !!! ");
	rectangle(80,120,600,190);
	setcolor(10);
	outtextxy(100,140,"Please note that Automatic mode once initialized cannot be");
	outtextxy(100,160,"Paused/ Stopped till ALL the Elements Details are displayed...");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\tPRESS 1 for Auto Driven\n";
	cout<<"\n\tPRESS 2 for User Driven\n";
	cout<<"\n\tEnter your CHOICE : ";
	cin>>option;
	switch(option)
	{
		case 1:	automatic();
			break;
		case 2: user_driven();
			break;
		default:default_choice();
			ask_auto();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::automatic()
{
	setcolor(14);
	outtextxy(80,360,"NOTE :");
	rectangle(60,340,610,410);
	setcolor(10);
	outtextxy(140,360,"The number of seconds (correct upto 3 decimal places) for");
	outtextxy(80,380,"which a record should be displayed");
	cout<<"\n\n\n\n\n\n\n\t";
	cout<<"ENTER the number of Seconds : ";
	cin>>seconds;
	execute_automatically();
	clearviewport();
}
void modern_periodic_table_and_structures::execute_automatically()
{
	ifstream read;
	read.open("element_information.dat",ios::binary|ios::in);
	while(!read.eof())
	{
		clrscr();
		cleardevice();
		read.read((char*)&element,sizeof(element));
		element.display_element_info();
		sleep(seconds);
	}
	read.close();
	getch();
	display_menu();
	clearviewport();

}
void modern_periodic_table_and_structures::struct_hydrocarbons()
{
	clrscr();
	setbkcolor(1);
	setcolor(14);
	for(y=400;y>=160;y--)
	{
		cleardevice();
		setcolor(14);
		outtextxy(210,y,"O R G A N I C   F A M I L Y");
		delay(5);
	}
	setlinestyle(DOTTED_LINE,2,THICK_WIDTH);
	for(i=455,j=175;i>=235,j<=385;i-=55,j+=55)
	{
		line(j,150,j+55,150);
		line(i,180,i-55,180);
		sleep(1);
	}
	setcolor(11);
	outtextxy(220,200,"1. ALKANE");
	outtextxy(220,230,"2. ALKENE");
	outtextxy(220,260,"3. ALKYNE");
	outtextxy(220,290,"4. Back to Main Menu");
	setcolor(10);
	sleep(1);
	outtextxy(240,315,"Please select your option (1-4)");
	outtextxy(420,70,"Press Zero(0) to exit");
	outtextxy(420,90,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(32)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(240,330,280,355);
	cin>>option;
	switch(option)
	{
		case 1:	alkane();
			break;
		case 2: alkene();
			break;
		case 3: alkyne();
			break;
		case 4: main_menu();
			break;
		case 0: confirm_exit();
			break;
		default:default_choice();
			struct_hydrocarbons();
			break;
	}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::alkane()
{
	clrscr();
	clearviewport();
	setbkcolor(5);
	cout<<"\n\n\n\n\n\n\tENTER THE NO. OF CARBON ATOMS (min. 1 & max. 10) : ";
	cin>>nb;
	if(nb>=1 && nb<=10)
	{
		setcolor(4);
		rectangle(90,140,485,270);
		setlinestyle(SOLID_LINE,0,NORM_WIDTH);
		setcolor(14);
		outtextxy(150,200,"C");
		outtextxy(120,200,"H");	//left atom
		outtextxy(150,170,"H");	//upper atom
		outtextxy(150,230,"H");	//lower atom
		setcolor(15);
		line(130,202,145,202);	//left bond
		line(153,195,153,180);	//upper bond
		line(153,210,153,225);	//lower bond

		if(nb==1)
		{
			setcolor(14);
			outtextxy(180,200,"H");	//right atom
			setcolor(15);
			line(160,202,175,202);	//right bond
		}
		if(nb>=2 && nb<=10)
		{
			for(i=1,j=180;i<=nb-2;i++,j+=30)
			{
				setcolor(14);
				outtextxy(j,200,"C");
				outtextxy(j,170,"H");	//upper atom
				outtextxy(j,230,"H");	//lower atom
				setcolor(15);
				line(j-20,202,j-5,202);	//left bond
				line(j+3,195,j+3,180);	//upper bond
				line(j+3,210,j+3,225);	//lower bond
			}
			setcolor(14);
			outtextxy(j,200,"C");
			outtextxy(j,170,"H");	//upper atom
			outtextxy(j,230,"H");	//lower atom
			outtextxy(j+30,200,"H");	//right atom
			setcolor(15);
			line(j+3,195,j+3,180);	//upper bond
			line(j+3,210,j+3,225);         //lower bond
			line(j-20,202,j-5,202);	//left bond
			line(j+10,202,j+25,202);	//right bond
		}
		sleep(1);
		setcolor(3);
		outtextxy(70,320,"The Name of the above ORGANIC COMPOUND is : ");
		setcolor(10);
		switch(nb)
		{
			case 1: outtextxy(420,320,"Methane");
				break;
			case 2: outtextxy(420,320,"Ethane");
				break;
			case 3: outtextxy(420,320,"Propane");
				break;
			case 4: outtextxy(420,320,"Butane");
				break;
			case 5: outtextxy(420,320,"Pentane");
				break;
			case 6: outtextxy(420,320,"Hexane");
				break;
			case 7: outtextxy(420,320,"Septane");
				break;
			case 8: outtextxy(420,320,"Octane");
				break;
			case 9: outtextxy(420,320,"Nonane");
				break;
			case 10: outtextxy(420,320,"Decane");
				 break;
			default: break;
		}
	}
	else
	{
		outtextxy(60,200,"Entered CARBON Atom are Not in above mentioned range");
		outtextxy(60,230,"Please again Enter the no of CARBON Atom(s)");
		getch();
		alkane();
	}
	getch()	;
	struct_hydrocarbons();
	clearviewport();
}
void modern_periodic_table_and_structures::alkene()
{
	clrscr();
	cleardevice();
	setbkcolor(5);
	cout<<"\n\n\n\n\n\n\tENTER THE NO. OF CARBON ATOMS (min. 2 & max. 10) : ";
	cin>>nb;
	if(nb>=2 && nb<=10)
	{
		setcolor(4);
		rectangle(90,140,485,270);
		setlinestyle(SOLID_LINE,0,NORM_WIDTH);
		setcolor(14);
		outtextxy(150,200,"C");
		outtextxy(120,200,"H");	//left atom
		outtextxy(150,170,"H");	//upper atom
		setcolor(15);
		line(130,202,145,202);	//left bond
		line(153,195,153,180);	//upper bond
		setcolor(14);
		outtextxy(180,200,"C");
		outtextxy(180,170,"H");       //upper atom
		setcolor(15);
		line(183,195,183,180);	//upper bond
		line(160,201,175,201);	//double bond
		line(160,204,175,204);	//double bond

		if(nb==2)
		{
			setcolor(14);
			outtextxy(210,200,"H");	//right atom
			setcolor(15);
			line(190,202,205,202);	//right bond
		}
		else
		{
			for(i=1,j=210;i<=nb-3;i++,j+=30)
			{
				setcolor(14);
				outtextxy(j,200,"C");
				outtextxy(j,170,"H"); 	//upper atom
				outtextxy(j,230,"H");          //lower atom
				setcolor(15);
				line(j-20,202,j-5,202);        //left bond
				line(j+3,195,j+3,180);         //upper bond
				line(j+3,210,j+3,225);	//lower bond
			}
			setcolor(14);
			outtextxy(j,200,"C");
			outtextxy(j,170,"H");	//upper atom
			outtextxy(j,230,"H"); 	//lower atom
			outtextxy(j+30,200,"H"); 	//right atom
			setcolor(15);
			line(j+3,195,j+3,180);	//upper bond
			line(j+3,210,j+3,225);         //lower bond
			line(j-20,202,j-5,202);	//left bond
			line(j+10,202,j+25,202);	//right bond
		}
		sleep(1);
		setcolor(3);
		outtextxy(70,320,"The Name of the above ORGANIC COMPOUND is : ");
		setcolor(10);
		switch(nb)
		{
			case 1: outtextxy(420,320,"Methene");
				break;
			case 2: outtextxy(420,320,"Ethene");
				break;
			case 3: outtextxy(420,320,"Propene");
				break;
			case 4: outtextxy(420,320,"Butene");
				break;
			case 5: outtextxy(420,320,"Pentene");
				break;
			case 6: outtextxy(420,320,"Hexene");
				break;
			case 7: outtextxy(420,320,"Septene");
				break;
			case 8: outtextxy(420,320,"Octene");
				break;
			case 9: outtextxy(420,320,"Nonene");
				break;
			case 10: outtextxy(420,320,"Decene");
				 break;
			default: break;
		}
	}
	else
	{
		outtextxy(60,200,"Entered CARBON Atom are Not in above mentioned range");
		outtextxy(60,230,"Please again Enter the no of CARBON Atom(s)");
		getch();
		alkene();
	}
	getch();
	struct_hydrocarbons();
	clearviewport();
}
void modern_periodic_table_and_structures::alkyne()
{
	clrscr();
	cleardevice();
	setbkcolor(5);
	cout<<"\n\n\n\n\n\n\tENTER THE NO. OF CARBON ATOMS (min. 2 & max. 10) : ";
	cin>>nb;
	if(nb>=2 && nb<=10)
	{
		setcolor(4);
		rectangle(90,140,485,270);
		setlinestyle(SOLID_LINE,0,NORM_WIDTH);
		setcolor(14);
		outtextxy(150,200,"C");
		outtextxy(120,200,"H");	//left atom
		setcolor(15);
		line(130,202,145,202);	//left bond
		setcolor(14);
		outtextxy(180,200,"C");
		setcolor(15);
		line(160,200,175,200);	//triple bond
		line(160,203,175,203);	//triple bond
		line(160,206,175,206);	//triple bond

		if(nb==2)
		{
			setcolor(14);
			outtextxy(210,200,"H");	//right atom
			setcolor(15);
			line(190,202,205,202);	//right bond
		}
		else
		{
			for(i=1,j=210;i<=nb-3;i++,j+=30)
			{
				setcolor(14);
				outtextxy(j,200,"C");
				outtextxy(j,170,"H"); 	//upper atom
				outtextxy(j,230,"H"); 	//lower atom
				setcolor(15);
				line(j-20,202,j-5,202);	//left bond
				line(j+3,195,j+3,180);	//upper bond
				line(j+3,210,j+3,225);	//lower bond
			}
			setcolor(14);
			outtextxy(j,200,"C");
			outtextxy(j,170,"H");	//upper atom
			outtextxy(j,230,"H");	//lower atom
			outtextxy(j+30,200,"H"); 	//right atom
			setcolor(15);
			line(j+3,195,j+3,180);	//upper bond
			line(j+3,210,j+3,225);	//lower bond
			line(j-20,202,j-5,202);	//left bond
			line(j+10,202,j+25,202);	//right bond
		}
		sleep(1);
		setcolor(3);
		outtextxy(70,320,"The Name of the above ORGANIC COMPOUND is : ");
		setcolor(10);
		switch(nb)
		{
			case 1: outtextxy(420,320,"Methyne");
				break;
			case 2: outtextxy(420,320,"Ethyne");
				break;
			case 3: outtextxy(420,320,"Propyne");
				break;
			case 4: outtextxy(420,320,"Butyne");
				break;
			case 5: outtextxy(420,320,"Pentyne");
				break;
			case 6: outtextxy(420,320,"Hexyne");
				break;
			case 7: outtextxy(420,320,"Septyne");
				break;
			case 8: outtextxy(420,320,"Octyne");
				break;
			case 9: outtextxy(420,320,"Nonyne");
				break;
			case 10: outtextxy(420,320,"Decyne");
				 break;
			default: break;
		}
	}
	else
	{
		outtextxy(60,200,"Entered CARBON Atom are Not in above mentioned range");
		outtextxy(60,230,"Please again Enter the no of CARBON Atom(s)");
		getch();
		alkyne();
	}
	getch();
	struct_hydrocarbons();
	clearviewport();
}
void modern_periodic_table_and_structures::create_edit_display_menu()
{
	clrscr();
	cleardevice();
	setbkcolor(9);
	for(x=550;x>=60;x--)
	{
		cleardevice();
		setcolor(12);
		outtextxy(x,160,"CHANGING DATA FILES");
		delay(5);
	}
	setlinestyle(DASHED_LINE,2,THICK_WIDTH);
	for(i=60;i<=380;i+=50)
	{
		setcolor(11);
		line(i,150,i+50,150);
		line(i,180,i+50,180);
		sleep(1);
	}
	setcolor(14);
	outtextxy(60,220,"1. CREATE Element Record");
	outtextxy(60,250,"2. MODIFY Element Record");
	outtextxy(60,280,"3. DELETE Element Record");
	outtextxy(60,310,"4. Back to MAIN MENU");
	sleep(1);
	setcolor(11);
	outtextxy(80,335,"Please select your option (1-4)");
	outtextxy(420,70,"Press Zero(0) to exit");
	outtextxy(420,90,"Press Enter to continue");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(12)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(80,350,123,370);
	cin>>option;
	switch(option)
	{
		case 1: create_element_record();
			break;
		case 2: modify_element_record();
			break;
		case 3: delete_element_record();
			break;
		case 4:	main_menu();
			break;
		case 0: confirm_exit();
			break;
		default:default_choice();
			create_edit_display_menu();
			break;
}
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::create_element_record()
{
	ofstream write;
	write.open("element_information.dat",ios::binary|ios::app);
	do
	{
		element.get_element_info();
		write.write((char*)&element,sizeof(element));
		clrscr();
		cleardevice();
		setbkcolor(5);
		setcolor(14);
		outtextxy(208,170,"Do you want to Enter more");
		outtextxy(207,190," Records in the Databases ?");
		outtextxy(270,220,"es");
		outtextxy(378,220,"o");
		setcolor(10);
		outtextxy(261,220,"Y");
		outtextxy(370,220,"N");
		setcolor(11);
		rectangle(180,150,470,250);	//inner
		rectangle(170,140,480,260);	//outer
		rectangle(245,210,300,235);	//yes
		rectangle(350,210,405,235);	//no
		sleep(1);
		setcolor(10);
		outtextxy(190,310,"Please select your option");
		setcolor(11);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
		setlinestyle(SOLID_LINE,0,NORM_WIDTH);
		rectangle(200,330,245,355);
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	write.close();
	create_edit_display_menu();
	getch();
	clearviewport();
}
void modern_periodic_table_and_structures::modify_element_record()
{
	clrscr();
	cleardevice();
	found='n';
	long pos;
	setbkcolor(5);
	for(int x=-15,y=5;x<=80,y<=100;x++,y++)
	{
		cleardevice();
		setcolor(10);
		outtextxy(x,y,"Enter the Atomic Number of the Element");
		delay(7);
	}
	setcolor(14);
	setlinestyle(SOLID_LINE,2,NORM_WIDTH);
	line(540,1,540,500);
	line(570,1,570,500);
	line(600,1,600,500);
	line(1,380,640,380);
	line(1,410,640,410);
	line(1,440,640,440);
	cout<<"\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	rectangle(180,123,270,148);
	cin>>req_atomic_no;
	fstream fio("element_information.dat",ios::binary|ios::in|ios::out);
	while(!fio.eof())
	{
		pos=fio.tellg();
		fio.read((char*)&element,sizeof(element));
		if(element.get_atomic_no()==req_atomic_no)
		{
			element.modify();
			fio.seekg(pos);
			fio.write((char*)&element,sizeof(element));
			found='y';
			break;
		}
	}
	if(found=='n')
		outtextxy(80,220,"Entered Atomic Number Not Found in the Database");
	fio.seekg(0);
	getch();
	clrscr();
	cleardevice();
	setbkcolor(5);
	setcolor(14);
	outtextxy(200,170,"After Modification do you want to");
	outtextxy(207,190," see the Exixsting elements ?");
	outtextxy(270,220,"es");
	outtextxy(378,220,"o");
	setcolor(10);
	outtextxy(261,220,"Y");
	outtextxy(370,220,"N");
	setcolor(11);
	rectangle(180,150,470,250);	//inner
	rectangle(170,140,480,260);	//outer
	rectangle(245,210,300,235);   	//yes
	rectangle(350,210,405,235);   	//no
	sleep(1);
	setcolor(10);
	outtextxy(190,310,"Please select your option");
	setcolor(11);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(200,330,245,355);
	cin>>choice;
	if(choice=='y'||choice=='Y')
	{
		while(!fio.eof())
		{
			fio.read((char*)&element,sizeof(element));
			element.display_element_info();
			sleep(2);
		}
	}
	fio.close();
	getch();
	create_edit_display_menu();
	clearviewport();
}
void modern_periodic_table_and_structures::delete_element_record()
{
	clrscr();
	cleardevice();
	found='n';
	char confirm='n';
	setbkcolor(5);
	for(int x=-15,y=5;x<=80,y<=100;x++,y++)
	{
		cleardevice();
		setcolor(10);
		outtextxy(x,y,"Enter the Atomic Number of the Element");
		delay(7);
	}
	setcolor(14);
	setlinestyle(SOLID_LINE,2,NORM_WIDTH);
	line(540,1,540,500);
	line(570,1,570,500);
	line(600,1,600,500);
	line(1,380,640,380);
	line(1,410,640,410);
	line(1,440,640,440);
	cout<<"\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	rectangle(180,123,270,148);
	cin>>req_atomic_no;
	ifstream read;
	read.open("element_information.dat",ios::binary|ios::in);
	ofstream write;
	write.open("temp_element_information.dat",ios::binary|ios::out);
	while(!read.eof())
	{
		read.read((char*)&element,sizeof(element));
		if(element.get_atomic_no()==req_atomic_no)
		{
			element.display_element_info();
			found='y';
			cout<<"\n\n\n\tAre you Sure you want to DELETE this Record ? ";
			cin>>confirm;
			if(confirm=='n')
				write.write((char*)&element,sizeof(element));
		}
		else
			write.write((char*)&element,sizeof(element));
	}
	if(found=='n')
		outtextxy(80,220,"Entered Atomic Number Not Found in the Database");
	read.close();
	write.close();
	remove("element_information.dat");
	rename("temp_element_information.dat","element_information.dat");
	read.open("element_information.dat",ios::binary|ios::in);
	clrscr();
	cleardevice();
	setbkcolor(5);
	setcolor(14);
	outtextxy(210,170,"After Deletion do you want to");
	outtextxy(207,190," see the remaining elements ?");
	outtextxy(270,220,"es");
	outtextxy(378,220,"o");
	setcolor(10);
	outtextxy(261,220,"Y");
	outtextxy(370,220,"N");
	setcolor(11);
	rectangle(180,150,470,250);	//inner
	rectangle(170,140,480,260);	//outer
	rectangle(245,210,300,235);   //yes
	rectangle(350,210,405,235);    //no
	sleep(1);
	setcolor(10);
	outtextxy(190,310,"Please select your option");
	setcolor(11);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(27)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(200,330,245,355);
	cin>>choice;
	if(choice=='y'||choice=='Y')
	{
		while(!read.eof())
		{
			read.read((char*)&element,sizeof(element));
			element.display_element_info();
			sleep(2);
		}
	}
	read.close();
	getch();
	create_edit_display_menu();
	clearviewport();
}
void modern_periodic_table_and_structures::default_choice()
{
	clrscr();
	cleardevice();
	setbkcolor(1);
	for(y=10,i=400;y<=170,i>=220;y++,i--)
	{
		cleardevice();
		setcolor(14);
		outtextxy(200,y,"N O T    A N Y    C H O I C E.....");
		outtextxy(120,i,"P L E A S E    E N T E R    A    VALID    C H O I C E");
		delay(2);
	}
	sleep(5);
	clearviewport();
}
void modern_periodic_table_and_structures::confirm_exit()
{
	clrscr();
	cleardevice();
	setbkcolor(1);
	for(x=5;x<=350;x++)
	{
		cleardevice();
		setcolor(10);
		outtextxy(x,100,"Are you sure you want to EXIT ?");
		delay(2);
	}
	setcolor(14);
	setlinestyle(SOLID_LINE,0,THICK_WIDTH);
	sleep(1);
	circle(130,420,200);
	circle(500,30,200);
	sleep(1);
	setcolor(10);
	outtextxy(60,300,"1. Press 'y / Y' for 'YES'");
	outtextxy(60,330,"2. Press 'n / N' for 'NO'");
	setcolor(14);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(11)<<" ";
	setlinestyle(SOLID_LINE,0,NORM_WIDTH);
	rectangle(60,350,123,375);
	cin>>choice;
	if(choice=='y'||choice=='Y')
	{
		sleep(1);
		exit(1);
	}
	else if(choice=='n'||choice=='N')
		main_menu();
	else
	{
		default_choice();
		confirm_exit();
	}
	getch();
	clearviewport();

}
void main()
{
	clrscr();
	int g_driver=DETECT,g_mode;
	initgraph(&g_driver,&g_mode,"c:\tc\bgi");
	modern_periodic_table_and_structures object;
	object.intro_I();
	getch();
	closegraph();
}