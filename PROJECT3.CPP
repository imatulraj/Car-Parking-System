#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<string.h>
struct user
{
char name[20],vehicle_number[20],contact_number[20],password[20],c_password[20];
int flag,vehicle_type,time,fine;
}slot[10];
int check()
{  int i,c=0;
  for(i=0;i<10;i++)
  { if (slot[i].flag==0)
	{  c=1;
	 return (i);

}

  }
  if(c==0)
  {return(-1);
  }
}
int price(int s,int new_time)
{  int money=0,extrtime=0;
   slot[s].fine=0;
    extrtime=new_time -  slot[s].time;
      if(extrtime==0)
      {  money=50+ 2*slot[s].time;
      }
      else
      {  slot[s].fine= 4*extrtime;
	money=50 + 2*slot[s].time + slot[s].fine;

      }

      return money ;

}
void page1();
void page2();
void login_form();
void smily();
void admin2();
void slotveiw();
void admin1();
void sadsmily();
void slotdetail();
void existing()
{     int s,time,money;
    char password[10];
    clrscr();

    textcolor(0);textbackground(13);
    printf("\n\n\n\t\t\t\t");cprintf("ENTER ID & PASSWORD");
    printf("\n\n\t");
    textcolor(9+BLINK); textbackground(0);
    printf("ID:-	");
    scanf("%d",&s);
    printf("\n\n\tPASSWORD:-      ");
    scanf("%s",password);
    printf("\n\n\tTIME:\t");
    scanf("%d",&time);
   if(strcmp(slot[s].password,password)==0)
     {
     printf("\n\n\n\n\n       \t\t\t\t");
     cprintf("ACCESS GRANTED");
     getch();
     money=price(s,time);
     clrscr();
     printf("\n\n\t\t\t\t\t"); textcolor(0);textbackground(RED);  cprintf("BILL");
     textcolor(9);
     printf("\n\n\n\n\n NAME:\t");
   puts(slot[s].name);
       printf("\n\n\n\ncontact number:\t");
     puts(slot[s].contact_number);
     printf("\n\n\n\nvehicle number:\t");
    puts(slot[s].vehicle_number);
    textbackground(0);
    printf("\n\n\nAMOUNT PAYABLE:\t\t%d$",money-slot[s].fine);
    printf("\n\n\nFINE:\t\t%d$",slot[s].fine);
    cprintf("\n\n\n   \t\tTOTAL BILL\t\t            ");
    textcolor(14+BLINK);
    cprintf("%d",money);
    getch();
    slot[s].flag=0;     textbackground(0);
     textcolor(WHITE);
      getch();
      page2();
     }
      else
      {  printf("\n\n\n\n\n       \t\t\t\t");
    cprintf("ACCESS DENIED");
       getch();
      clrscr();
      page2();
       }

 }
 void slotview()
{ int gd=0,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setcolor(YELLOW);
 outtextxy(40,80,"SLOT:1"); rectangle(50,90,160,150);
 if(slot[0].flag==0)
 { setcolor(GREEN);circle(105,120,20);
  }
  else
  {setcolor(RED);
  circle(105,120,20);
  }
/*1111111111111111111111111111111111111111111111111111111111111111111*/
  setcolor(YELLOW);
 outtextxy(260,80,"SLOT:2"); rectangle(270,90,380,150);
 if(slot[1].flag==0)
 { setcolor(GREEN);circle(325,120,20);
  }
  else
  {setcolor(RED);
  circle(325,120,20);
  }
/*22222222222222222222222222222222222222222222222222222222222222222222222*/
 setcolor(YELLOW);
 outtextxy(480,80,"SLOT:3"); rectangle(490,90,600,150);
 if(slot[2].flag==0)
 { setcolor(GREEN);circle(545,120,20);
 }
  else
  {setcolor(RED);
 circle(545,120,20);
 }
//444444444444444444444444444444444444444444444444444444444444
 setcolor(YELLOW);
 outtextxy(40,180,"SLOT:4"); rectangle(50,190,160,250);
 if(slot[3].flag==0)
 { setcolor(GREEN);circle(105,220,20);
 }
  else
  {setcolor(RED);
  circle(105,220,20);
  }
//55555555555555555555555555555555555555555555555555555555555555555555
  setcolor(YELLOW);
 outtextxy(260,180,"SLOT:5"); rectangle(270,190,380,250);
 if(slot[4].flag==0)
 { setcolor(GREEN);circle(325,220,20);
  }
  else
  {setcolor(RED);
  circle(325,220,20);
  }
//66666666666666666666666666666666666666666666666666666666666666666666
 setcolor(YELLOW);
 outtextxy(480,180,"SLOT:6"); rectangle(490,190,600,250);
 if(slot[5].flag==0)
 { setcolor(GREEN);circle(545,220,20);
 }
  else
  {setcolor(RED);
 circle(545,220,20);
 }
//7777777777777777777777777777777777777777777777777777777777
  setcolor(YELLOW);
 outtextxy(40,280,"SLOT:7"); rectangle(50,290,160,350);
 if(slot[6].flag==0)
{ setcolor(GREEN);circle(105,320,20);
 }
  else
  {setcolor(RED);
  circle(105,320,20);
  }
//888888888888888888888888888888888888888888888888888888888888
 setcolor(YELLOW);
 outtextxy(260,280,"SLOT:8"); rectangle(270,290,380,350);
 if(slot[7].flag==0)
 { setcolor(GREEN);circle(325,320,20);
  }
  else
  {setcolor(RED);
  circle(325,320,20);
  }
//999999999999999999999999999999999999999999999999999999999999999
 setcolor(YELLOW);
 outtextxy(480,280,"SLOT:9"); rectangle(490,290,600,350);
 if(slot[8].flag==0)
 { setcolor(GREEN);circle(545,320,20);
}
  else
  {setcolor(RED);
 circle(545,320,20);
 }
//1010101010101010101001010101011010100110101010101010101010101010
  setcolor(YELLOW);
 outtextxy(260,380,"SLOT:10"); rectangle(270,390,380,450);
 if(slot[9].flag==0)
 { setcolor(GREEN);circle(325,420,20);
  }
  else
  {setcolor(RED);
 circle(325,420,20);
  }
 getch();
 closegraph();
}
void slotdetail()
{ clrscr();
int i;
textcolor(0);textbackground(9);
cprintf("                                     DETAIL                                     ");

for(i=0;i<10;i++)
 { if(slot[i].flag==1)
   {textcolor(0); textbackground(7);
    cprintf("\n\nSLOT:%d\n",i+1);
    textcolor(7); textbackground(0);
    printf("\nNAME:%s\nCONTACT NUMBER:%s\nVEHICLE NUMBER:%s\nID:%d\npassword:%s\nTIME:%d", slot[i].name,slot[i].contact_number,slot[i].vehicle_number,i,slot[i].password,slot[i].time);
    printf("\n\n");
    getch();
    }
    else
    { textcolor(0); textbackground(7);
    printf("\n");
    cprintf("SLOT:%d",i+1);
    textcolor(WHITE); textbackground(0);
    printf("\nFREE");
    printf("\n\n");
    getch();
    }
 }
 getch();
}

void admin1()
{  char c[10], password[10],name[10];
  int i,j;
  clrscr();
textcolor(0);textbackground(RED);  printf("\n");
cprintf("                                 ID AND PASSWORD                                ");
textcolor(5);textbackground(0);
printf("\n\nENTER NAME\t:");gets(c);gets(name);  i=strcmp(name,"ACUBE");
printf("\n\nPASSWORD\t:");gets(password); j=strcmp(password,"nashedigang");
if(i==0&&j==0)
{
  textcolor(GREEN+BLINK);
  printf("\n\n\n\n\n\n\t\t\t\t");
  cprintf("ACCESS GRANTED");
  getch();
  clrscr();
  admin2();       //mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
}
else
{  textcolor(RED+BLINK);
printf("\n\n\n\n\n\n\t\t\t\t");
cprintf("ACCESS DENIED");
getch();
clrscr();
page2();        // cccccccccccccccccccccccccccccccccc


}}
void admin2()
{ int ch;
 clrscr();
printf("********************************************************************************");
textcolor(8);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("********************************************************************************");
printf("\n\n");
textcolor(0);
textbackground(11);
cprintf("                                # SELECT OPTION #                               ");
textbackground(0);textcolor(WHITE);
printf("\n\n1)SLOT VEIW\n2)SLOT DETAIL\n3)EXIT ADMIN MODE");
printf("\n\nENTER:");
scanf("%d",&ch);
switch(ch)
{ case 1:
  {clrscr();
  slotview();
  admin2();
  }
  case 2:
  {clrscr();
   slotdetail();
   admin2();
  }
   case 3:
   {clrscr();
   page2();

   }
}
getch();
}


void rainbow()
{
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<150;i++)
	{
		delay(50);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}closegraph();
}
void end()
{
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<=150;i++)
	{
	    outtextxy(150,340,"ooooo o    o   o   oo   o o o   o   o oooo o   o");
	    outtextxy(150,350,"  o   o oo o  o o  o o  o oo     o o  o  o o   o");
	    outtextxy(150,360,"  o   o oo o ooooo o  o o o o     o   o  o o   o");
	    outtextxy(150,370,"  o   o    o o   o o   oo o  o    o   oooo ooooo");
	    setcolor(i/10);
	    arc(x,y,0,180,i-10);
	}
	for(i=150;i>=30;i--)
	{  delay(5);
	setcolor(0);
	arc(x,y,0,180,i-10);
	}
	closegraph();
}

 void page2()
{ clrscr();
 int ch;
 printf("********************************************************************************");
textcolor(8);
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 printf("********************************************************************************");
  printf("\n\n\n");printf("                       ");
  textcolor(1);textbackground(0);
  cprintf("<---------------------------------->");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf("                                    ");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf(" ");printf(" ");cprintf("     ");cprintf("  ");printf("    ");cprintf("  ");printf("     ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("     ");printf(" ");cprintf("    ");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf(" ");printf(" ");cprintf("     ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("      ");printf(" ");cprintf("  ");printf("   ");cprintf("   ");printf(" ");cprintf("    ");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf(" ");printf(" ");cprintf("     ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("  ");printf("  ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("  ");printf("  ");cprintf(" ");printf(" ");cprintf("    ");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf(" ");printf("     ");cprintf(" ");cprintf("  ");printf("    ");cprintf("  ");printf("     ");cprintf("  ");printf(" ");cprintf("  ");printf(" ");cprintf("    ");printf("  ");cprintf("    ");
  printf("\n");printf("                       ");textcolor(9);textbackground(7);cprintf("                                    ");
  printf("\n");printf("                       ");textcolor(1);textbackground(0);cprintf("<---------------------------------->");
  printf("\n\n");
  cprintf("SELECT\n");
  printf("1)ADMIN\n      2)ARRIVAL\n      3)RETURN\n      4)EXIT\n");
  textcolor(5);
  scanf("%d",&ch);
  switch(ch)
  { case 1:
     { admin1();
       break;
     }
    case 2:
    {
      login_form();
      break;
    }
    case 3:
    {existing();
     break;
    }
    case 4:
     { printf("\n");
       clrscr();
       end();
       exit(0);
     }
     defualt :
     {page2();
       break;
  }
  }


}

void page1()
{int i;
 printf("********************************************************************************");
 textcolor(8);
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 printf("********************************************************************************");
 printf("\n\n\n\n\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("================================================================");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("|");printf("   ");textcolor(4);textbackground(0);cprintf("ooooo oooooo  ooo    oooo ooooo oo   o  o o o   o ooooo    ");textcolor(0);textbackground(7);cprintf("|");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("|");printf("   ");textcolor(4);textbackground(0);cprintf("o     o oo o  o  o   o  o o o o o o  o o  o oo  o o        ");textcolor(0);textbackground(7);cprintf("|");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("|");printf("   ");textcolor(4);textbackground(0);cprintf("C     o AA o  Ro     Pooo o A o Ro   Ko   I o N o o ooG    ");textcolor(0);textbackground(7);cprintf("|");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("|");printf("   ");textcolor(4);textbackground(0);cprintf("o     o    o  o o    o    o   o o o  o o  o o  oo o   o    ");textcolor(0);textbackground(7);cprintf("|");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("|");printf("   ");textcolor(4);textbackground(0);cprintf("ooooo o    o  o  o   o    o   o o  o o  o o o   o ooooo    ");textcolor(0);textbackground(7);cprintf("|");printf("\n");
 printf("       ");textcolor(0);textbackground(7);cprintf("================================================================");printf("\n");
 printf("\n\n\n\n");
 printf("********************************************************************************");
 textcolor(8);textbackground(0);
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 printf("********************************************************************************");
 textcolor(5);cprintf("  press any key to start");
 getch();
 for(i=0;i<=2;i++)
 {printf(".");
 delay(1000);
 }
 }

void main()
{int x, i;
	for(i=0;i<10;i++)
	{slot[i].flag=0;
}
  rainbow();
  clrscr();
 page1();
  clrscr();
 page2();
  getch();
  }

void smily()
{ int gd=0,gm;
  int i;

    initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
    for(i=2;i<6;i++)
    {
    setcolor(YELLOW);
    circle(320,250,80);
    setcolor(i);
    outtextxy(130,110,"ooooo o    o   o   oo   o o o  o   o oooo o   o");
    outtextxy(130,120,"  o   o oo o  o o  o o  o oo    o o  o  o o   o");
    outtextxy(130,130,"  o   o oo o ooooo o  o o o o    o   o  o o   o");
    outtextxy(130,140,"  o   o    o o   o o   oo o  o   o   oooo ooooo");

    setcolor(YELLOW);
    circle(280,220,10);
    circle(360,220,10);
    ellipse(320,250,240,300,90,40);
    delay(500);
    setcolor(0);
    circle(360,220,10);
    circle(280,220,10);
    setcolor(YELLOW);
    line(350,220,370,220);
    line(270,220,290,220);
    delay(500);
    setcolor(0);
    line(350,220,370,220);
    line(270,220,290,220);

    }setcolor(YELLOW);
    circle(360,220,10);
    circle(280,220,10);
    closegraph();
}
void sadsmily()
{ int i, gd=0,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
// setfillstyle(SOLID_FILL,YELLOW);
 circle(320,300,80);
// floodfill(320,300,WHITE);
setfillstyle(SOLID_FILL,WHITE);
setcolor(YELLOW);

 circle(280,270,10); floodfill(280,270,YELLOW);setcolor(BLACK);setfillstyle(SOLID_FILL,BLACK); circle(280,275,5);floodfill(280,275,BLACK);

 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,WHITE);
 circle(360,270,10); floodfill(360,270,YELLOW);setcolor(BLACK);setfillstyle(SOLID_FILL,BLACK); circle(360,275,5);floodfill(360,275,BLACK);
 setcolor(YELLOW);
 ellipse(320,380,60,120,90,40);
 for(i=0;i<30;i++)
 { delay(50);
   setcolor(i/10);
    outtextxy(130,110," **   * ****  ******* **** **** **** **   * **** *****");
    outtextxy(130,120," * *  * ****   *****  **** *    **** * *  * *     *** ");
    outtextxy(130,130," *  * * ****    ***   **** *    **** *  * * *      *  ");
    outtextxy(130,140," *   ** ****     *    *  * **** *  * *   ** ****   *  ");
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 ellipse(360,290+i,0,360,5,10);
 floodfill(360,290+i,BLACK);
  setcolor(BLUE);
 setfillstyle(SOLID_FILL,BLUE);
 ellipse(360,290+i+10,0,360,5,10);
 floodfill(360,290+i+10,BLUE);
 delay(50);
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 ellipse(360,290+i,0,360,5,10);
 floodfill(360,290+i,BLACK);
 }
 closegraph();
}
 void login_form()
{
int s;
clrscr();      //check position of free space");
 s=check();
if(s<0)
{sadsmily();
  clrscr();
   page2();
}
else
{clrscr();
printf("\t\t\t\t");

printf("\n\n\t\t\tENTER YOUR DETAIL");
getch();
printf("\n(%d)",s+1);
gets(slot[s].name);
printf("\n\n\tNAME:\t\t\t");
gets(slot[s].name);
printf("\n\n\tVEHICLE NUMBER:\t\t");
//slot[s].vehicle_number=NULL;
gets(slot[s].vehicle_number);
printf("\n\n\tCONTACT NUMBER:\t\t");
gets(slot[s].contact_number);
printf("\n\n\tVEHICLE TYPE(2/4 wheeler):\t");
scanf("%d",&slot[s].vehicle_type);
printf("\n\n\tUSER ID IS:\t%d",s);
printf("\n\n\tPASSWORD:\t\t");
scanf("%s",&slot[s].password);
printf("\n\n\tTIME PARK IN MIN:\t");
scanf("%d",&slot[s].time);
printf("\n\n\tAMOUNT PAYABLE:\t\t%d$",price(s,slot[s].time));
slot[s].flag=1;
getch();
smily();
clrscr();
page2();
}
}