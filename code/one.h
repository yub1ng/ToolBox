#define _one_H
void midprt(char words[]);
void starline(void);
void one(void)
{
		int hour, min;
		char shutdown[20] = "shutdown -s -t ", time[10] = "0";
		char ch,clean[1024]; //ch用来读取getchar返回值，clean用来清空缓冲区,因为fflush(stdin)可移值性不好
	a: system("cls");
		printf("\n");
		midprt("定时关机");
		printf("\n");
		starline();
		midprt("设定倒计时关机");
		midprt("取消定时关机");
		midprt("输入b返回主菜单");
		starline();
		printf("\n\n请输入序号:");
		while ((ch = getchar()) != 'b')//返回值检查，b退出小程序
		{
			fgets(clean, 1024, stdin);//清空缓冲区
			switch (ch)
			{
			case '1':
				system("cls");//清屏
				printf("请输入倒计时(小时:分钟)(输入非数字返回上一层):");
				while (scanf("%d:%d", &hour, &min) == 2)//返回值检查
				{
					fgets(clean, 1024, stdin); //清空缓冲区
					if (hour>24 || hour<0 || min>60 || min<0 )
						printf("输入错误,您可以继续输入:");
					else
					{
						_itoa_s(3600 * hour + 60 * min, time, 10, 10);//将数字转化为字符串
						system(strcat(shutdown, time));//stract将time字符串连接在shutdown字符串后，一起输入至dos
						printf("完成!,您可以再次输入:");
						break;
					}
				}
				fgets(clean, 1024, stdin); //清空缓冲区
				goto a;//回到小工具开始
			case '2':
				system("shutdown -a");
				printf("取消成功!您可以继续输入:");
				continue;
			default:	printf("输入错误,请重新输入:");
			}
		}
}