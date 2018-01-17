#define _three_H
void three(void)
{
	int top, bot, num, n; //上界,下界,随机数个数,已生成随机数个数
	char ch,clean[1024]; //ch记录scanf()的返回值 ，clean用来清空缓冲区，因为fflush(stdin)可移植性不好
	system("cls");//清屏
	printf("\n");
	midprt("随机数生成器");
	printf("\n");
	starline();
	midprt("输入b返回主菜单，输入其它字符继续:");
	starline();
	while (getchar() != 'b') //当输入不是b时，运行小工具
	{
		fgets(clean, 1024, stdin);//清空缓冲区
		printf("请输入下界:");

		while (1) //读取下界
		{
			ch = scanf("%d",&bot);//读取返回值
			fgets(clean, 1024, stdin); //清空缓冲区
			if (ch != 1) //返回值检查
			{
				printf("输入错误,请重新输入:");
				continue; //输入有错循环读取
			}
			else break; //输入无错跳出循环
		}
		printf("请输入上界:");

		while (1) //读取上界
		{
			ch = scanf("%d", &top);
			fgets(clean, 1024, stdin); //清空缓冲区
			if (ch != 1) //返回值验证输入
			{
				printf("输入错误,请重新输入:");
				continue;//输入有错循环读取
			}
			else if (top < bot)//数值实际意义检查
			{
				printf("上界应大于下界，请重新输入:");
				continue; //输入有错循环读取
			}
			else break;//输入无错跳出循环
		}
		printf("请输入生成随机数的个数:");

		while (1) //读取生成随机数个数
		{
			ch = scanf("%d", &num);//返回值检查
			fgets(clean, 1024, stdin);//清空缓冲区
			if (ch != 1) //返回值验证输入
			{
				printf("输入错误,请重新输入:");
				continue;//输入有错循环读取
			}
			else if (num <= 0)//数值实际意义检查
			{
				printf("个数应大于0，请重新输入:");
				continue;//输入有错循环读取
			}
			else break; //输入无错跳出循环
		}
		srand(time(NULL)); //提供生成伪随机数序列的种子
		for (n = 0; n < num; n++)
		{
			printf("第%d个随机数：%d\n", n + 1, rand() % (top - bot + 1) + bot);//生成随机数，随机数范围为[bot,top]
		}
		printf("输入b返回主菜单，输入其它任意键继续使用小工具:");//返回第九行getchar
	}
}