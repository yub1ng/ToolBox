#define _six_H
#include<conio.h>
void six(void)
{
	system("cls");
	int n;
	char s[1];
	midprt("���������");
	printf("\n");
	starline;
	midprt("����������������������");
	getchar();
	for (n = 3;n>0; n--)
	{
		printf("%d ��֮������\n",n);
		Sleep(1000);
	}
	midprt("����������ر����������");
	while (1)
	{
		if (_kbhit())break;
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //�������  
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);  //����ɿ�
		Sleep(100);
	}
}
