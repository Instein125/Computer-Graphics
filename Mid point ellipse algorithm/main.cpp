#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	float a,b,h,k;
	cout<<"Enter length of major axis and minor axis: ";
	cin>>a>>b;
	cout<<"Enter centre of the ellipse: ";
	cin>>h>>k;
	float x=0,y=b;
	initwindow(600,600);
	float p1=b*b-a*a*2*b+(1/4)*a*a;
	while(2*b*b*x<=2*a*a*y)
	{
		if (p1<0)
		{
			x+=1;
			p1=p1+2*b*b*x+b*b;
		}
		else
		{
			x+=1;
			y-=1;
			p1=p1+2*b*b*x-2*a*a*y+b*b;
		}
		putpixel(x+h,y+k,4);
		putpixel(-x+h,y+k,4);
		putpixel(-x+h,-y+k,4);
		putpixel(x+h,-y+k,4);
	}
	float p2=b*b*(x+.5)*(x+.5)+a*a*(y-1)*(y-1)-(a*b*a*b);
	while(y!=0)
	{
		if (p2<0)
		{
			x+=1;
			y-=1;
			p2=p2+2*b*b*x-2*a*a*y+a*a;
		}
		else
		{
			y-=1;
			p2=p2-2*a*a*y+a*a;
		}
		putpixel(x+h,y+k,4);
		putpixel(-x+h,y+k,4);
		putpixel(-x+h,-y+k,4);
		putpixel(x+h,-y+k,4);
	}
	getch();
	closegraph();
}
