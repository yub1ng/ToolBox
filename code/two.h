#define _two_H
void two(void)
{
   char ssid[40], begin[70] = "netsh wlan show profiles ",end[30]=" key=clear | find \"�ؼ�����\"";
	system("cls");
	printf("\n");
	midprt("WIFI����鿴��");
	printf("\n");
	starline();
	system("netsh wlan show profiles | find \"�����û������ļ�\"");
	starline();
	printf("������WIFI����(���b�˳�):");
	scanf("%s",&ssid);
	strcat(ssid,end);
	strcat(begin,ssid);
	system(begin);
	system("pause");
}