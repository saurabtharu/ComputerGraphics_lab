// 2.WAP to implement Midpoint Circle drawing algorithm. 


#include<stdio.h>
#include<graphics.h>


void drawcircle(int x,int y,int xc, int yc){ 
	putpixel(xc+x,yc+y,15); 
	putpixel(xc+y,yc+x,15); 
	putpixel(xc-y,yc+x,15); 
	putpixel(xc-x,yc+y,15); 
	putpixel(xc-x,yc-y,15); 
	putpixel(xc-y,yc-x,15); 
	putpixel(xc+y,yc-x,15); 
	putpixel(xc+x,yc-y,15);
}



int main() {

	int gd=DETECT,gm;
	int r,xc,yc,x,y,p;
	printf("Enter the radius: ");
	scanf("%d",&r);

	printf("Enter the center: ");
	scanf("%d %d",&xc,&yc);

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=0, y =r;

	drawcircle(x,y,xc,yc);
	p=1-r;				// initial decision parameter


	while(x<y) {
		if(p<0) {
			x = x+1;
			y=y;
			p=p+2*x +1;
			drawcircle(x,y,xc,yc);
			delay(50);

		}else {
			x=x+1;
			y=y-1;
			p=p+2*x + 1 -2*y;
			drawcircle(x,y,xc,yc);
		}delay(50);

	}
	getchar();
	closegraph();

	return 0;

}
