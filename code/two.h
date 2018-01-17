#define _two_H
void two(void)
{
   char ssid[40], begin[70] = "netsh wlan show profiles ",end[30]=" key=clear | find \"关键内容\"";
	system("cls");
	printf("\n");
	midprt("WIFI密码查看器");
	printf("\n");
	starline();
	system("netsh wlan show profiles | find \"所有用户配置文件\"");
	starline();
	printf("请输入WIFI名称(输出b退出):");
	scanf("%s",&ssid);
	strcat(ssid,end);
	strcat(begin,ssid);
	system(begin);
	system("pause");
}