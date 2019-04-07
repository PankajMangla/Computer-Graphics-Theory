#include< stdio.h>
#include< conio.h>
#include< graphics.h>
#include< math.h> 
int getPt( int n1 , int n2 , float perc )
{
    int diff = n2 - n1;

    return n1 + ( diff * perc );
}
void main()
{
 int ch;
 int gd=DETECT,gm;
 int x1,y1,x2,y2,x3,y3,x,y,xa,ya,xb,yb;
 float i;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 x1=250,y1=50,x2=315,y2=200,x3=250,y3=250;
 
 
 for(i = 0 ; i < 1 ; i += 0.001 )
{
    xa = getPt( x1 , x2 , i );
    ya = getPt( y1 , y2 , i );
    xb = getPt( x2 , x3 , i );
    yb = getPt( y2 , y3 , i );

    x = getPt( xa , xb , i );
    y = getPt( ya , yb , i );

    putpixel(x,y,WHITE);
}

 x1=150,y1=50,x2=85,y2=200,x3=150,y3=250;
 
 
 for(i = 0 ; i < 1 ; i += 0.001 )
{
    xa = getPt( x1 , x2 , i );
    ya = getPt( y1 , y2 , i );
    xb = getPt( x2 , x3 , i );
    yb = getPt( y2 , y3 , i );

    x = getPt( xa , xb , i );
    y = getPt( ya , yb , i );

    putpixel(x,y,WHITE);
}

line(150,250,250,250);
ellipse(200, 50, 0, 360, 50, 10);

 getch();
 closegraph();
}
 
