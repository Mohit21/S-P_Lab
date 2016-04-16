#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>


void header();
//login
struct login
{
char inst[10];
char uid[12];
char bh[5];
char pass[20];
};

//-----------------------------------------------------------------------
//PERSONAL INFO
void display();
void personal();
//----------------------------------------------------------------
struct stu
{
	char name[20];
	char fname[20];
	char mname[20];
	char address[50];
	char course[5];
	char smail[40];
	char pmail[40];
	char dob[15];
	char mob[12];
	char enr[10];
	int sem;
};
struct stu s;
//----------------------------------------------------------------------
//ACADEMIC INFO

//---------------------------------------------------------------------------
//ATTENDANCE
struct attend
{
char sub[15];
float ptt,pt,pl,pp;
};

struct attend1
{
struct attend sub1;
struct attend1 *next;
}*temp;
typedef struct attend1 node;//name changed to node
node *start,*trav;
void displaya();
//----------------------------------------------------------------------------
//TIME TABLE
struct time_t
{
	char batch[5];
	char mths[10];
	char phys[10];
	char bedc[10];
	char ds[10];
	char gncp[10];
	char dslab[10];
	char physlab[10];
	char bedclab[10];
	char day[10];
};
struct time_t1
{
struct time_t tab;
struct time_t1 *next;
}*temp1;
typedef struct time_t1 node1;
node1 *start1,*trav1;
void displayt();
//----------------------------------------------------------------------------
void academic();
//----------------------------------------------------------------------------
//Xam Info
struct marks
{
	char sub3[20];
	float mr;
};

void exam();
void displaym();
//-----------------------------------------------------------------------------
void header()
{
	int gd,gm,x=60,y=8,p=155,q=35;
	int left,top,bottom,right;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi" );
	left = getmaxy() / 1 - 500 ;
top = getmaxy() / 2 - 1000;
right = getmaxx() / 2 + 500;
bottom = getmaxy() / 2-180;
setfillstyle(1,6);
rectangle(top,left,right,bottom);
floodfill(getmaxx()/3,getmaxy()/100,15);
settextstyle(3,0,3);
outtextxy(x,y,"JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY");
settextstyle(3,0,1);
outtextxy(p,q,"Deemed to be University under section 3 of UCG Act");
getch();
    // closegraph();
	      }
//Login------------------------------------------------------------------------------------------------------------
void login()
{
	struct login log;
	int gd,gm,x=60,y=8,p=155,q=35;
	int i,a=190,bo=50,d=90,c=75;
	int left, top, right, bottom;
       //	int points[]={620,150,620,400,20,400,320,150};
	int l,t,r,b;
       /*	int counter=0,flag=0;
	char uid[25],pwd[25],s_uid[][25]={"9913103538"};
       char s_pwd[][25]={"qwerty"},ch='a',bb[5],inst[5];
       //	int pa;
       //	char arr[20]={"abc"};
	int j=0;                                        */
	int j,counter=0,flag=0;
	char uid[25],pwd[25],abc[10],s_uid[][25]={"9913103538"},inst[5];
	char s_pwd[][25]={"qwerty"},ch='a',bb[5];

	char ch4;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	{
	delay(500);

	setcolor(YELLOW);
	settextstyle(1,HORIZ_DIR,4);
       outtextxy(a,bo,"JAYPEE INSTITUTE");
      settextstyle(1,HORIZ_DIR,4);
      outtextxy(c,d," OF INFORMATION TECHNOLOGY");
      settextstyle(8,0,3);
      outtextxy(200,130,"SECTOR-128,NOIDA");
      setcolor(CYAN);
       settextstyle(1,0,4);
      outtextxy(232,170,"WEB-KIOSK");


	for(i=0;i<=360;i++)
	{
		circle(300,330,8);
		if(i<=90)
		continue;
		else if(i>90&&i<=180)
		{
		setcolor(CYAN);

		}
		else if(i>180&&i<=270)
		{
		setcolor(YELLOW);

		}
		else
		{
		setcolor(RED);
		}
		pieslice(300,330,0,i,80);
		settextstyle(3,0,2);
		outtextxy(215,410,"Loading....please Wait");
		delay(10);
	}
	closegraph();
	}
	initgraph(&gd,&gm,"c:\\turboc3\\bgi" );
	left = getmaxy() / 1 - 500 ;
top = getmaxy() / 2 - 1000;
right = getmaxx() / 2 + 500;
bottom = getmaxy() / 2-180;
setfillstyle(1,6);
rectangle(top,left,right,bottom);
floodfill(getmaxx()/3,getmaxy()/100,15);
       settextstyle(3,0,3);
       outtextxy(x,y,"JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY");
       settextstyle(3,0,1);
       outtextxy(p,q,"Deemed to be University under section 3 of UCG Act");
     //	int gd=DETECT,gm,
	delay(500);
	     //	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
l = getmaxy() / 1 - 350 ;
t = getmaxy() / 2 - 240;
r = getmaxx() / 2 + 340;
b = getmaxy() / 1-60;
setfillstyle(1,6);
rectangle(t,l,r,b);
floodfill(getmaxx()/2,getmaxy()/2,15);
setcolor(BLACK);
settextstyle(1,0,9);
outtextxy(15,140,"LOGIN");
settextstyle(1,0,9);
outtextxy(22,240,"PAGE");


//fseek(fl,0,SEEK_END);
gotoxy(45,13);
printf("Institue:");
fflush(stdin);
gets(inst);
gotoxy(45,15);
printf("User-Id:");
fflush(stdin);
gets(uid);
gotoxy(45,17);
printf("Batch:");
fflush(stdin);
gets(bb);
gotoxy(45,19);
printf("Password:");
fflush(stdin);
j=0;
while(1)
{
	ch=getch();
	if(ch==13)
	break;
	else if(ch==8)
	{       if(j!=0) /*this is for avoiding the ENTER instructions getting deleted */
		{
			printf("\b");  /*printing backspace to move cursor 1 pos back*/
			printf("%c",32);/*making the char invisible which is already on console*/
			printf("\b"); /*printing backspace to move cursor 1 pos back*/
			i--;
			pwd[j]='\0';
		}
		else
		continue;
	}
	else
	{
	putchar('*');/* char - '*' will be printed instead of the character */
	pwd[j]=ch;
	j++;
	}
}
pwd[j]='\0';
for(j=0;j<=2;j++)
{
	if((strcmp(pwd,s_pwd[j])==0) && (stricmp(uid,s_uid[j]))==0)
	{
		flag=1;
		break;
	}
}
if(flag)
{gotoxy(45,21);
printf(" USER AUTHENTICATED ");
}
else
{
gotoxy(45,21);
printf("DENIED");
getch();
exit(0);
}

	getch();
	closegraph();
}

void main()
{
int i;			//,counter=0,flag=0;
char ch2,ch3;
//-----------------------------------------------------
login();
//clrscr();
//header();
header();
printf("\n\n\n\n\n\n\t\t1.PERSONAL INFO");
//delay(500);
printf("\n\n\t\t2.ACADEMIC INFO");
//delay(500);
printf("\n\n\t\t3.EXAM INFO");
//delay(500);
printf("\n\n\t\t4.SIGNOUT");
//delay(500);
printf("\nEnter Your Choice:");
do
{
fflush(stdin);
scanf("%c",&ch2);
 switch(ch2)
 {
 case '1':
	 // personal();
	  break;

 case '2':
     //academic();
	  break;

 case '3':
     //exam();
	  break;

 case '4':
     printf("\nBREAKING!!");
	  exit(0);
	  break;
 default:printf("\n\tYou Entered Wrong Choice!!");
	printf("\nWant to Enter Again(Y/N):");
	scanf("%c",&ch3);
	if(ch3=='y'||ch3=='Y')
	{
	printf("\n\tAgain Enter Your Choice:");
	}
	break;
 }
 }
 while(ch3=='y'||ch3=='Y');

getch();
}
