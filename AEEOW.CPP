#include <graphics.h>
#include <conio.h>
#include<iostream.h>
#include<dos.h>
      void b_f(int x,int y,int f,int b)
{
	if(getpixel(x,y)!=b && getpixel(x,y)!=f)
	{        delay(1);
		putpixel(x,y,f);
		b_f(x+1,y,f,b);
		b_f(x-1,y,f,b);
		b_f(x,y+1,f,b);
		b_f(x,y-1,f,b);
	}
}

void main()
{
   int gd = DETECT, gm,i;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    for(i=0;i<580;i++){
    setcolor(10);
    line(30+i,25, 30+i,480);
    }
      setcolor(0);
//arrows
int arrow[64]={81,78, 77,81, 90,106, 88,108, 89,111, 83,108, 80,111,
 64,81, 59,82, 75,111, 68,114, 66,119, 65,122, 70,134, 78,147,
85,154, 103,166, 139,236, 141,225, 107,162, 106,147, 119,158,
 117,160, 146,212, 148,208, 123,157, 122,140, 119,128,
111,110, 102,103, 95,104, 81,78 };
// arrow3
int arrow3[24]={54,132, 82,181, 79,181, 132,272, 138,274, 136,267,
81,174, 57,131, 50,120, 41,120, 49,132, 54,132};
//upper
int upper[16]={81,174,57,131, 62,129, 68,136, 71,142, 76,153, 80,161,
81,174};
//bottom
int bottom[24]={ 54,132, 82,181, 71,177, 63,171, 69,169, 60,168, 55,164,
58,162, 51,161, 45,147, 46,133, 54,132};
//a3stick
int a3stick[14]={165,309, 209,380, 272,477, 286,473,
239,405, 176,315, 165,309};

drawpoly(32,arrow);delay(600);
drawpoly(12,arrow3);delay(600);
drawpoly(8,upper);delay(600);
drawpoly(12,bottom);delay(600);
//extra lines
line(76,112, 105,166);
line(80,111, 107,162);
line(91,108, 117,160);
line(95,106, 122,156);line(102,116, 91,96); line(94,111,88,106);

// cap
int cap[72]={ 409,248, 403,205, 398,193, 384,180, 373,160,
369,157, 362,142, 358,125, 353,102, 348,89, 335,69, 325,56,
305,43, 287,32, 276,38, 271,54, 274,57, 271,71, 286,83,
282,86,275,88, 276,99, 288,112, 288,117, 275,115, 275,121,281,128,
276,130, 276,137, 295,149, 315,158, 337,173, 354,184,
367,200, 384,219, 409,248};
delay(600);drawpoly(36,cap);delay(600);

// face
int face[82]={283,151, 276,156, 235,174, 220,182, 213,194, 216,240,
223,248, 224,280, 234,292, 244,306, 254,314, 265,320,
276,324, 299,320, 314,306, 328,285, 329,263, 320,266,
312,276, 301,290, 291,303, 283,321, 279,319, 279,312,
283,297, 271,295, 261,290, 285,291, 293,289, 307,276,
326,257, 329,250, 336,242, 341,219, 341,198, 341,182,
327,170, 316,164, 302,158, 290,155, 283,151};
// eye
int eye[86]={259,163, 275,164, 289,162, 305,160, 317,164,
327,170, 341,182, 360,196, 363,212, 366,223, 370,233,
377,243, 384,251, 389,256, 392,263, 394,274, 393,284,
390,296, 376,301, 363,303, 355,307, 349,306, 340,311,
330,318, 316,326, 313,337, 310,350, 307,374, 305,389,
301,418, 298,439, 321,475, 318,480, 260,396, 208,311,
233,336, 266,387, 287,421, 287,377, 290,340, 295,328,
307,314,317,304};
// eye 2
int eye2[34]={341,197, 332,204, 322,207, 309,207, 298,204, 288,200,
279,195, 275,195, 268,199, 261,204, 251,207, 244,208, 236,202,
234,205, 225,200, 214,192, 212,198};
// back 1
int back1[36]={ 245,308, 253,323, 238,307, 227,300, 222,300, 208,309,
194,308, 176,306, 154,301, 150,295, 145,283, 140,280,
137,256, 139,232, 159,215, 180,204, 202,193, 227,180 };
//lefteye
int lefteye[24]={241,172,253,171, 261,172, 266,176, 266,184, 259,189,
250,191, 239,191, 232,187, 229,184, 228,179,241,172};

//righteye
int righteye[26]={ 291,178, 298,173, 312,171, 322,171,
329,174, 329,182, 326,187, 320,192, 308,191, 298,188,
291,184,290,180, 291,178};

drawpoly(41,face);delay(600);
drawpoly(43,eye);delay(600);
drawpoly(17,eye2);delay(600);
drawpoly(18,back1);delay(600);
drawpoly(7,a3stick);delay(600);
drawpoly(12,lefteye);delay(600);
drawpoly(13,righteye);delay(600);

/// extra
line(287,372,306,385);line(140,231,215,225);line(224,280,140,262);
line(194,307,228,285); line(330,262,331,247);line(330,269,350,306);
line(224,266,137,256);line(166,304,172,273);
// in cap
line(315,50,322,163);line(270,69,345,84);line(288,112,357,122);
line(363,141,285,143);line(359,191,343,177);line(371,204,399,193);

// face mask
b_f(281,179,0,0);
//background
b_f(204,302,0,0); b_f(228,293,0,0);
b_f(197,213,0,0);b_f(220,272,0,0);b_f(205,249,0,0);b_f(151,286,0,0);
b_f(176,294,0,0);
b_f(290,295,0,0);b_f(327,305,0,0);
// right back
line(336,242,366,223);b_f(352,213,0,0);
line(377,243,329,263);b_f(344,244,0,0);
line(375,302,352,247);b_f(339,276,0,0);b_f(384,267,0,0);
// down arrow stick
b_f(238,414,0,0);b_f(291,428,0,0);

// face
line(304,287,316,303);line(281,323,281,321);line(263,290,225,280);
line(215,225,339,223);line(223,249,332,247);line(262,290,276,194);
b_f(323,277,15,0);b_f(296,311,15,0);b_f(252,303,15,0);
b_f(252,181,15,0);b_f(311,181,15,0);b_f(234,216,15,0);
b_f(220,231,15,0);b_f(234,270,15,0);b_f(312,211,15,0);
b_f(321,230,15,0);b_f(289,267,15,0);b_f(282,158,15,0);
setcolor(15);
line(304,287,316,303);line(281,322,281,320);line(263,290,225,280);
line(215,225,339,223);line(223,249,331,247);line(262,290,276,194);
setcolor(0);

// cap   (color)
b_f(285,59,0,0);b_f(329,75,0,0);b_f(290,95,0,0);b_f(335,105,0,0);
b_f(308,146,0,0);b_f(298,126,0,0);b_f(353,127,0,0);
b_f(366,180,0,0);b_f(400,227,0,0);

// arrow brush (black)
b_f(60,156,0,0);b_f(80,133,0,0); b_f(72,148,0,0);
b_f(95,123,0,0);
b_f(111,124,0,0);
// arrow stick
b_f(88,189,6,0);b_f(90,195,6,0);b_f(119,190,6,0);b_f(135,189,6,0);
// extra add(optional)
int arrow33[24]={54,132, 82,181, 79,181, 132,272, 138,274, 136,267,
81,174, 57,131, 50,120, 41,120, 49,132, 54,132};
setcolor(6);drawpoly(12,arrow33);
int arrow11[20]={81,78, 77,81, 90,106,119,159,117,160,146,212,148,208,122,156,
95,104,81,78};drawpoly(10,arrow11);
int arrow22[18]={80,111, 64,81, 59,82, 75,111,105,169,139,236,141,225,
107,162,80,111};drawpoly(9,arrow22);


//left cap
setcolor(2);
int lcap[76]={  287,32, 276,38, 271,54, 274,57, 271,71, 286,83,
282,86,275,88, 276,99, 288,112, 288,117, 275,115, 275,121,281,128,
276,130, 276,137, 282,151, 276,155, 235,174, 218,182, 175,207, 166,208,163,213,
141,230, 142,218, 153,195, 160,180, 182,143, 194,122, 209,97, 221,77, 227,63,
235,51, 238,52, 248,45, 260,39, 275,32, 286,32};
drawpoly(38,lcap);
setcolor(10);line(282,151,276,137);
     // for text
     setcolor(0);
     settextstyle(1,0,6);
     outtextxy(466,60,"YOU"); delay(600);
     outtextxy(456,120,"HAVE");delay(600);
     outtextxy(436,180,"FAILED");delay(600);
     outtextxy(456,240,"THIS"); delay(600);
     outtextxy(456,300,"CITY");
getch();
closegraph();
}