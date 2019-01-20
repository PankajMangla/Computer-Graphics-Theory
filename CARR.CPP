#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <graphics.h>

#define round(a)((int)(a+0.5))

void lineDDA(int xa,int ya,int xb,int yb)
{
     int dx=xb-xa,dy=yb-ya,steps,k;
     float xinc,yinc,x=xa,y=ya;
     
     if(abs(dx)>abs(dy))
                        steps=abs(dx);
     else
                        steps=abs(dy);
     
     xinc=float(dx)/float(steps);
     yinc=float(dy)/float(steps);
     putpixel(round(x),round(y),WHITE);
     for(k=0;k<steps;k++)
     {
                         x+=xinc;
                         y+=yinc;
                         putpixel(round(x),round(y),WHITE);
     }
}
         
int main( )
{
	int gd=0,gm;

	initgraph(&gd,&gm,"");
	circle(194,389,24);
	circle(194,389,46);
	circle(520,389,24);
	circle(520,389,46);
lineDDA(248,388,467,388);
arc(194,389,0,180,51);
arc(520,389,0,180,51);
lineDDA(571,389,621,382);
lineDDA(103,389,143,389);  
arc(103,373,180,270,16);
lineDDA(87,373,87,319);
ellipse(87, 311, 0, 360, 5, 8);
lineDDA(87,302,200,300);

lineDDA(200,300,220,200);
lineDDA(621,382,615,200);
lineDDA(220,200,615,200);



	while( !kbhit() ); 
  
    
    
	closegraph( );
    
	return( 0 );
}

