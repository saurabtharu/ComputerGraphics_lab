#include<stdio.h>
#include<graphics.h>

int main()
{
        int gd=DETECT,gm;
        initgraph(&gd,&gm,NULL);
	textcolor(RED);
	printf("HELLO WORLD\n");
	getchar();
        closegraph();
	return 0;
}
