#define _six_H
#include<conio.h>
void six(void)
{
	system("cls");
	int n;
	char s[1];
	midprt("鼠标连点器");
	printf("\n");
	starline;
	midprt("按下任意键开启鼠标连点器");
	getchar();
	for (n = 3;n>0; n--)
	{
		printf("%d 秒之后启动\n",n);
		Sleep(1000);
	}
	midprt("按下任意键关闭鼠标连点器");
	while (1)
	{
		if (_kbhit())break;
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //左键按下  
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);  //左键松开
		Sleep(100);
	}
}
