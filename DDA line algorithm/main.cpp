#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int Round(float x)
{
	return x+0.5;
}

void lineDDA(float x,float y, float xinc,float yinc,float steps)
{
	initwindow(600,600);
	putpixel(Round(x),Round(y), 5);
	for(int i=0;i<steps;i++)
	{
		x+=xinc;
		y+=yinc;
		putpixel(Round(x),Round(y), 4);
	}
}

int main()
{
	float x1,y1,x2,y2,dx,dy,steps,xinc,yinc;
	cout<<"Enter 1st point: ";
	cin>>x1>>y1;
	cout<<"Enter 2nd point: ";
	cin>>x2>>y2;
	dx=x2-x1; dy=y2-y1;
	if (abs(dx)>abs(dy))
		steps=abs(dx);
	else 
		steps=abs(dy);
	xinc=dx/steps;
	yinc=dy/steps;
	lineDDA(x1,y1,xinc,yinc,steps);
	getch();
	closegraph();
}
