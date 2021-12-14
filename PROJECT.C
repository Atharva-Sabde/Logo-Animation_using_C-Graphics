#include<stdio.h>
#include<graphics.h>
#include<conio.h>

//==================================================
void traffic(void);
void traffic(void)
{
int gd = DETECT, gm, midx, midy, i, j;
initgraph(&gd, &gm, "C:\\TC\\BGI");

for(i=0;i<100;i++)             //signal start
{

settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"ALWAYS FOLLOW TRAFFIC RULES!");

line(318,300,318,370); // pole of light
   line(322,300,322,370);
 line(300,200,340,200);
 line(300,200,300,300);
 line(340,200,340,300);
 line(300,300,340,300);
 setfillstyle(SOLID_FILL,RED);
 circle(320,220,10);
 floodfill(321,220,WHITE);
 circle(320,250,10);
 circle(320,280,10);        //signal end
				       // car start
 line(0,370,1000,370);
 line(50+i,320,120+i,320);
 line(50+i,320,35+i,340);
 line(120+i,320,135+i,340);
 line(35+i,340,15+i,340);
 line(135+i,340,155+i,340);
 line(15+i,340,15+i,360);
 line(15+i,360,45+i,360);
 circle(55+i,360,10);
 line(155+i,340,155+i,360);
 line(155+i,360,125+i,360);
 circle(115+i,360,10);
 line(65+i,360,105+i,360);
 line(145+i,345,145+i,355);
 line(145+i,345,155+i,345);
 line(145+i,355,155+i,355);
 delay(10);
 cleardevice();                   //car end
}

 settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"ALWAYS FOLLOW TRAFFIC RULES!");
 line(0,370,1000,370);
 line(50+i,320,120+i,320);
 line(50+i,320,35+i,340);
 line(120+i,320,135+i,340);
 line(35+i,340,15+i,340);
 line(135+i,340,155+i,340);
 line(15+i,340,15+i,360);
 line(15+i,360,45+i,360);
 circle(55+i,360,10);
 line(155+i,340,155+i,360);
 line(155+i,360,125+i,360);
 circle(115+i,360,10);
 line(65+i,360,105+i,360);
 line(145+i,345,145+i,355);
 line(145+i,345,155+i,345);
 line(145+i,355,155+i,355);

 line(318,300,318,370); // pole of light
   line(322,300,322,370);
 line(300,200,340,200);
 line(300,200,300,300);
 line(340,200,340,300);
 line(300,300,340,300);
 circle(320,220,10);
 circle(320,250,10);
 circle(320,280,10);
 setfillstyle(SOLID_FILL,RED);
 circle(320,220,10);
 floodfill(321,220,WHITE);
 delay(2000);
 cleardevice();
 circle(320,220,10);

 settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"ALWAYS FOLLOW TRAFFIC RULES!");
 line(300,200,340,200);
 line(300,200,300,300);
 line(0,370,1000,370);
 line(50+i,320,120+i,320);
 line(50+i,320,35+i,340);
 line(120+i,320,135+i,340);
 line(35+i,340,15+i,340);
 line(135+i,340,155+i,340);
 line(15+i,340,15+i,360);
 line(15+i,360,45+i,360);
 circle(55+i,360,10);
 line(155+i,340,155+i,360);
 line(155+i,360,125+i,360);
 circle(115+i,360,10);
 line(65+i,360,105+i,360);
 line(145+i,345,145+i,355);
 line(145+i,345,155+i,345);
 line(145+i,355,155+i,355);

 line(300,200,340,200);
 line(300,200,300,300);
 line(340,200,340,300);
 line(300,300,340,300);
 line(318,300,318,370); // pole of light
   line(322,300,322,370);
 circle(320,280,10);
 setfillstyle(SOLID_FILL,YELLOW);
 circle(320,250,10);
 floodfill(321,250,WHITE);
 delay(2000);
 cleardevice();
 circle(320,250,10);
  settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"ALWAYS FOLLOW TRAFFIC RULES!");
 line(300,200,340,200);
 line(300,200,300,300);
 line(0,370,1000,370);
 line(50+i,320,120+i,320);
 line(50+i,320,35+i,340);
 line(120+i,320,135+i,340);
 line(35+i,340,15+i,340);
 line(135+i,340,155+i,340);
 line(15+i,340,15+i,360);
 line(15+i,360,45+i,360);
 circle(55+i,360,10);
 line(155+i,340,155+i,360);
 line(155+i,360,125+i,360);
 circle(115+i,360,10);
 line(65+i,360,105+i,360);
 line(145+i,345,145+i,355);
 line(145+i,345,155+i,345);
 line(145+i,355,155+i,355);

 line(300,200,340,200);
 line(300,200,300,300);
 line(340,200,340,300);
 line(300,300,340,300);
 line(318,300,318,370); // pole of light
   line(322,300,322,370);
 setfillstyle(SOLID_FILL,GREEN);
 circle(320,280,10);
 floodfill(321,280,WHITE);
 delay(200);

for(i=100;i<500;i++)
{
	settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"ALWAYS FOLLOW TRAFFIC RULES!");
 line(300,200,340,200);
 line(300,200,300,300);
 line(340,200,340,300);
 line(300,300,340,300);
 line(318,300,318,370); // pole of light
   line(322,300,322,370);
 circle(320,220,10);
 circle(320,250,10);
 setfillstyle(SOLID_FILL,GREEN);
 circle(320,280,10);
 floodfill(321,280,WHITE);

 line(0,370,1000,370);
 line(50+i,320,120+i,320);
 line(50+i,320,35+i,340);
 line(120+i,320,135+i,340);
 line(35+i,340,15+i,340);
 line(135+i,340,155+i,340);
 line(15+i,340,15+i,360);
 line(15+i,360,45+i,360);
 circle(55+i,360,10);
 line(155+i,340,155+i,360);
 line(155+i,360,125+i,360);
 circle(115+i,360,10);
 line(65+i,360,105+i,360);
 line(145+i,345,145+i,355);
 line(145+i,345,155+i,345);
 line(145+i,355,155+i,355);
 delay(10);
 cleardevice();
}
}


void Gon(void);
void Gon(void)
{ int gd=DETECT ,gm; initgraph(&gd,&gm,"c:\\tc\\bgi");   }
//------------------
void Goff(void);
void Goff(void)
{      closegraph();      }

void chutiyapa(void);
void chutiyapa(void)
{
int i;
line(0,getmaxy()-52,getmaxx(),getmaxy()-52);

		 delay(1000);
	for(i=2;i<800;i++)
	{
	setcolor(6);
	arc(0,0, 270, 360, i);
	arc(638,478, 90, 180, i);
	setcolor(6);
	arc(0,1, 270, 360, i);
	arc(639,478, 90, 180, i);
	 }
	 for(i=0;i<800;i++)
	 {
	setcolor(8);
	arc(0,339, 0, 90, i);
	arc(0,338, 1, 89, i);
	 }
}

//---------------------
void border(void);
void border(void)
{
	int left,top,right,bottom,i,j ;
	int radius= i;
	int stangle =270, endangle = 360;

  left =   10    ;
   top =   10    ;
 right =   629   ;
bottom =   469   ;

     rectangle(left,top,right,bottom);
     rectangle(left-1,top-1,right+1,bottom+1);
	       delay(500);  setcolor(4);

     rectangle(left+2,top+2,right-2,bottom-2);
     rectangle(left+3,top+3,right-3,bottom-3);
	rectangle(6,6,12,12);
	rectangle(633,6,627,12);
	rectangle(627,467,633,473);
	rectangle(6,627,12,427);


	       for(j=0;j<16;j++)
	       {
	      setcolor(j);   settextstyle(0, HORIZ_DIR,5);
	      outtextxy(90,200,"Hello World!");
	      delay(100);
	       }


	      setcolor(15);
	      //------
	       rectangle(left,top,right,bottom);
     rectangle(left-1,top-1,right+1,bottom+1);

	       delay(500);  setcolor(12);
	 rectangle(left+2,top+2,right-2,bottom-2);
	 rectangle(left+3,top+3,right-3,bottom-3);
	rectangle(6,6,12,12);
	rectangle(633,6,627,12);
	rectangle(627,467,633,473);
	rectangle(6,627,12,427);
	//-----------
	setcolor(10);
     rectangle(left+5,top+5,right-5,bottom-5);
     rectangle(left+6,top+6,right-6,bottom-6);

   // -----------------__ARC__---------------
	/* draw arc */
//	delay(500);
	for(i=2;i<800;i++)
	{
	setcolor(14);
	arc(15,15, stangle, endangle, i);
	arc(16,15, stangle, endangle, i);
	delay(3);
	 }
	 setcolor(0);
	 settextstyle(0, HORIZ_DIR,2);
	 outtextxy(40,200,"WELCOME TO THE WORLD OF PROGRAMMING!");
       delay(1000);
		/* draw arc */
	for(i=2;i<800;i++)
	{
	setcolor(0);
	arc(639,479, 90, 180, i);
	arc(638,478, 90, 180, i);
	delay(3);
	 }
}

//---------------------------------
void introtxt(void);
void introtxt(void)
{
  int i,a,b;
  int left,top,right,bottom ;
  left =  10   ;
   top =  10   ;
 right =  629  ;
bottom =  469  ;

	  setcolor(13);
     rectangle(left,top,right,bottom);
     rectangle(left-1,top-1,right+1,bottom+1);

	    delay(500);  setcolor(9);
      rectangle(left+2,top+2,right-2,bottom-2);
      rectangle(left+3,top+3,right-3,bottom-3);
	 rectangle(6,6,12,12);
	 rectangle(633,6,627,12);
	 rectangle(627,467,633,473);
	 rectangle(6,627,12,427);

	   setcolor(14);  delay(500);
     rectangle(left+5,top+5,right-5,bottom-5);
     rectangle(left+6,top+6,right-6,bottom-6);

	   setcolor(9); delay(500);
    outtextxy(30,30,"RAJIV GANDHI COLLEGE OF ENGINEERING");
    outtextxy(180,70," AND RESEARCH  ");

	settextstyle(7,HORIZ_DIR,3);setcolor(11);delay(800);
    outtextxy(190,130,"Department of ");
    outtextxy(50,170,"COMPUTER SCIENCE AND ENGINEERING ");

	settextstyle(0, HORIZ_DIR,3); setcolor(4);delay(800);
    outtextxy(100,240,"TEAM RUNTIME TERROR");

	settextstyle(3, HORIZ_DIR,2); setcolor(14);delay(500);
    outtextxy(100,300,"\n Atharva Sabde\t\tA-44");
    outtextxy(100,340,"\n CHirag Mendhe\t\tA-45");

		/* draw arc */
				 delay(3000);
	for(i=2;i<800;i++)
	{
	setcolor(15);
	arc(0,0, 270, 360, i);
	arc(638,478, 90, 180, i);

	arc(0,1, 270, 360, i);
	arc(639,478, 90, 180, i);
	 }

		 settextstyle(10, HORIZ_DIR,2);
outtextxy(70,100,"MOVING CAR");
}
//===================================================
void game(void);
void game(void)
{
int i;
setcolor(6);
for(i=370;i>=270;i--)
{
circle(60,i,30);
circle(60,i,29);
circle(60,i,28);
circle(60,i,27);
line(0,400,639,400);
line(0,401,639,401);
line(0,402,639,402);
//\\\\\\\\\\\\\\\\\\\\
line(200,360,200,400);
line(300,360,300,400);
line(500,360,500,400);
 line(600,360,600,400);
delay(10);
cleardevice();
 }

 for(i=270;i<=370;i++)
{
//floodfill(62,271,2);
circle(60,i,30);
circle(60,i,29);
circle(60,i,28);
circle(60,i,27);
line(0,400,639,400);
line(0,401,639,401);
line(0,402,639,402);
//\\\\\\\\\\\\\\\\
line(200,360,200,400);
line(300,360,300,400);
line(500,360,500,400);
line(600,360,600,400);
delay(10);
cleardevice();
 }
 circle(60,i,30);
circle(60,i,29);
circle(60,i,28);
circle(60,i,27);
line(0,400,639,400);
line(0,401,639,401);
line(0,402,639,402);
/* {
   cprintf("Press any key to continue:");
   while (!kbhit()) /* do nothing * ;
   cprintf("\r\nA key was pressed...\r\n");
   return 0;
}
kbhit(); */
//------------------__OBSTACLES__-----------------------
line(200,360,200,400);
line(300,360,300,400);
line(500,360,500,400);
 line(600,360,600,400);
}
void logo(void);
void logo(void)
{
int gd = DETECT, gm, midx, midy, i, j;
initgraph(&gd, &gm, "C:\\TC\\BGI");
//setfillstyle( SOLID_FILL,6);
arc(320,230,90,0,70);    delay(50);
arc(320,230,105,125,90);    delay(50);
arc(320,230,149,171,90);     delay(50);
arc(320,230,195,215,90);      delay(50);
arc(320,230,240,260,90);      delay(50);
arc(320,230,285,305,90);         delay(50);
arc(320,230,330,347,90);          delay(50);


line(320,160,320,120);      delay(50);
line(320,120,305,120);        delay(50);
line(305,120,295,143);        delay(50);

line(268,156,245,143);         delay(50);
line(245,143,230,160);          delay(50);
line(230,160,241,183);           delay(50);

line(230,217,205,220);          delay(50);
line(205,220,205,247);           delay(50);
line(205,247,233,253);           delay(50);

line(247,282,238,307);            delay(50);
line(238,307,255,320);              delay(50);
line(255,320,274,307);        delay(50);

line(303,318,310,345);           delay(50);
line(310,345,335,345);          delay(50);
line(335,345,343,318);          delay(50);

line(372,304,395,315);           delay(20);
line(395,315,410,300);            delay(20);
line(410,300,398,275);             delay(20);

line(390,230,430,230);  delay(20);  //right side logo
line(430,230,430,245);    delay(20);
line(430,245,408,251);     delay(20);

circle(365,155,30);    delay(50);   //three circles of logo
circle(407,203,18);       delay(50);
circle(420,170,8);        delay(50);

arc(280,230,90,270,16); delay(20); //c
arc(280,230,90,270,8);   delay(20);
line(280,246,290,246);    delay(20);
line(280,214,290,214);    delay(20);
line(280,238,290,238);    delay(20);
line(280,222,290,222);    delay(20);
arc(290,242,270,90,4);    delay(20);
arc(290,218,270,90,4);    delay(20);

line(305,246,325,246);   delay(20); //s
line(305,240,325,240);   delay(20);
line(310,220,330,220);   delay(20);
line(310,214,330,214);   delay(20);
line(310,226,325,226);   delay(20);
line(310,234,325,234);   delay(20);
arc(330,217,270,90,3);   delay(20);
arc(310,224,90,270,10);  delay(20);
arc(310,223,90,270,3);     delay(20);
arc(325,236,270,90,10);  delay(20);
arc(305,243,90,270 ,3);   delay(20);
arc(325,237,270,90,3);      delay(20);


line(345,246,367,246);   delay(20); //E
line(345,240,367,240);   delay(20);
line(345,220,367,220);   delay(20);
line(345,214,367,214);   delay(20);
line(345,227,367,227);   delay(20);
line(345,233,367,233);   delay(20);

arc(367,217,270,90,3);   delay(20);
arc(367,230,270,90,3);   delay(20);
arc(367,243,270,90,3);   delay(20);
arc(345,217,90,270,3);   delay(20);
arc(345,230,90,270,3);   delay(20);
arc(345,243,90,270,3);   delay(20);



//mic


ellipse(319,297,135,240,120,60);      delay(20);
ellipse(319,297,135,240,121,61);      delay(50);
ellipse(275,350,0,360,16,8);          delay(50);
ellipse(275,350,0,360,15,7);          delay(50);

settextstyle(10, HORIZ_DIR,1);
outtextxy(80,360,"CREATIVE | SUBLIME | ENTHUSIASTIC");
delay(500);
}
//======================colour blink================
void blink(void);
void blink(void)
{
int gd = DETECT, gm, midx, midy, i=0, j;
initgraph(&gd, &gm, "C:\\TC\\BGI");
//setfillstyle( SOLID_FILL,6);
while(i!=15)
{
setcolor(i);
arc(320,230,90,0,70);
arc(320,230,105,125,90);
arc(320,230,149,171,90);
arc(320,230,195,215,90);
arc(320,230,240,260,90);
arc(320,230,285,305,90);
arc(320,230,330,347,90);
line(320,160,320,120);
line(320,120,305,120);
line(305,120,295,143);
line(268,156,245,143);
line(245,143,230,160);
line(230,160,241,183);
line(230,217,205,220);
line(205,220,205,247);
line(205,247,233,253);

line(247,282,238,307);
line(238,307,255,320);
line(255,320,274,307);

line(303,318,310,345);
line(310,345,335,345);
line(335,345,343,318);
line(372,304,395,315);
line(395,315,410,300);
line(410,300,398,275);
line(390,230,430,230);    //right side logo
line(430,230,430,245);
line(430,245,408,251);
circle(365,155,30);       //three circles of logo
circle(407,203,18);
circle(420,170,8);
arc(280,230,90,270,16);  //c
arc(280,230,90,270,8);
line(280,246,290,246);
line(280,214,290,214);
line(280,238,290,238);
line(280,222,290,222);
arc(290,242,270,90,4);
arc(290,218,270,90,4);
line(305,246,325,246);    //s
line(305,240,325,240);
line(310,220,330,220);
line(310,214,330,214);
line(310,226,325,226);
line(310,234,325,234);
arc(330,217,270,90,3);
arc(310,224,90,270,10);
arc(310,223,90,270,3);
arc(325,236,270,90,10);
arc(305,243,90,270 ,3);
arc(325,237,270,90,3);
line(345,246,367,246);    //E
line(345,240,367,240);
line(345,220,367,220);
line(345,214,367,214);
line(345,227,367,227);
line(345,233,367,233);
arc(367,217,270,90,3);
arc(367,230,270,90,3);
arc(367,243,270,90,3);
arc(345,217,90,270,3);
arc(345,230,90,270,3);
arc(345,243,90,270,3);
//++++++++mic+++++++++
ellipse(319,297,135,240,120,60);
ellipse(319,297,135,240,121,61);
ellipse(275,350,0,360,16,8);
ellipse(275,350,0,360,15,7);
settextstyle(10, HORIZ_DIR,1);
outtextxy(80,360,"CREATIVE | SUBLIME | ENTHUSIASTIC");
delay(700);
i++;
}
}//--------colour blink close--------




//%%%%%%%%%%%%%%%%%%%%__MAIN__%%%%%%%%%%%%%%%%%%%%%%%%
void main(void)
{
char x;
Gon();

border();          // getch();
  //  delay(500) ;
cleardevice();
introtxt();
//         	chutiyapa();
//		 game();
// midx=getmaxx()/2; midy=getmaxy()/2;


delay(1000);
traffic();

delay(1000);
logo();

while(1)     // for colur blink
{
blink();
x=getch();
 if(x=='q')
  break;
  }

  cleardevice();
settextstyle(10, HORIZ_DIR,4);
outtextxy(160,160,"THANK YOU!");
	delay(2000);
getch();
Goff();
}