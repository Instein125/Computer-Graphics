#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>

using namespace std;

int main()
{
	float r,h,k,p;
	cout<<"Enter the radius: ";
	cin>>r;
	cout<<"Enter the center: ";
	cin>>h>>k;
	int x=0,y=r;
	p=(5/4)-r;
	initwindow(600,600);
	while(x<=y)
	{
		if(p<0)
		{
			x=x+1;
			p=p+2*x+1;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*x+1-2*y;
		}
		putpixel(x+h,y+k,4);
		putpixel(-x+h,y+k,4);
		putpixel(-x+h,-y+k,4);
		putpixel(x+h,-y+k,4);
		putpixel(y+h,x+k,4);
		putpixel(-y+h,x+k,4);
		putpixel(y+h,-x+k,4);
		putpixel(-y+h,-x+k,4);
	}
	getch();
	closegraph();
}
