#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <math.h>

using namespace std;

void bresenham(int x,int y,int dx,int dy, int xinc,int yinc)
{
	putpixel(x,y,5);
	if(dx>dy)
	{
		int p=2*dy-dx;
		for(int k=0;k<dx;k++)
		{
			if (p<0)
			{
				x=x+xinc;
				p=p+2*dy;
				putpixel(x,y,4);
			}
			else
			{
				x=x+xinc;
				y=y+yinc;
				p=p+2*dy-2*dx;
				putpixel(x,y,4);
			}
		}
	}
	else
	{
		int p=2*dx-dy;
		for(int k=0;k<dy;k++)
		{
			if (p<0)
			{
				y=y+yinc;
				p=p+2*dy;
				putpixel(x,y,4);
			}
			else
			{
				x=x+xinc;
				y=y+yinc;
				p=p+2*dx-2*dy;
				putpixel(x,y,4);
			}
		}
	}
}
int main()
{
	int x1,x2,y1,y2,dx,dy,xinc=1,yinc=1;
	cout<<"Enter 1st point: ";
	cin>>x1>>y1;
	cout<<"Enter 2nd point: ";
	cin>>x2>>y2;
	initwindow(500,500);
	if (x2<x1) xinc=-1;
	if (y2<y1) yinc=-1;
	dx=abs(x2-x1);dy=abs(y2-y1);
	bresenham(x1,y1,dx,dy,xinc,yinc);
	getch();
	closegraph();
}
