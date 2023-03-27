#include <stdio.h>

#include <graphics.h>
enum My
{
	WIDTH=610,
	HEIGHT=993
};
//±£´æ
IMAGE bk;
IMAGE img_role[2];
void loadImg()//
{ 
	//610 993
	loadimage(&bk, "D:\\wenj\\vs2022xuexi\\mg_3_25\\images\\background.jpg.png");
	loadimage(&img_role[0], "D:\\wenj\\vs2022xuexi\\mg_3_25\\images\\planeNormal_1.jpg.png");
	loadimage(&img_role[1], "D:\\wenj\\vs2022xuexi\\mg_3_25\\images\\planeNormal_2.jpg.png");
}
	
void gameDraw()
{
	loadImg();
	//putimage(0, 0, &bk);

	putimage(0,0, &img_role[0], NOTSRCERASE);
	//putimage(0, 0, &img_role[1]);// , NOTSRCERASE);
	putimage(0,0, &img_role[1]);
}
int main() {
	initgraph(WIDTH, HEIGHT);
	gameDraw();
	while (1)
	{

	}
	return 0;
}
