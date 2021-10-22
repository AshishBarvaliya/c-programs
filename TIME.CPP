#include<graphics.h>
#include<iostream.h>
#include<time.h>
#include<dos.h>
void main()
{
   int gd = DETECT, gm,i,c=1;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	time_t rtime;
	struct tm * currentTime;
	char a[100];
	while(1){
	for(i=0;i<7;i++){
	 setcolor(7);
	  line(130+i,100,130+i,200);
	  line(130,200-i,500,200-i);
	  line(500-i,200,500-i,100);
	  line(130,100+i,500,100+i);
	}
	rtime=time(NULL);
	currentTime=localtime(&rtime);
	strftime(a,100,"%I:%M:%S",currentTime);
	if(c%2==0)
	   setcolor(15);
	else
	   setcolor(5);
	settextstyle(1,0,8);
	outtextxy(150,100,a);
	c++;
	delay(1000);
	cleardevice();
	}
  }