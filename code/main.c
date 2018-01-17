#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include"one.h"
#include"two.h"
#include"three.h"
#include"four.h"
#include"five.h"
#include"six.h"
#include"starline.h"
#include"midprt.h"
int main(void)
{
int no; //序号
char clean[1024]; //用来清空缓冲区，因为fflush(stdin)可移值性不好
system("color f0");
system("mode 50,25");
a:system("cls"); //当小程序结束时回到此处
printf("     *********                   ***          \n"
       "     *********                   ***          \n"	
       "        ***                      ***          \n"
       "        ***                      ***          \n"
       "        ***    ******  ******    ***   *******\n"
       "        ***   ***  ******  ***   ***   *** ***\n"
       "        ***   ***  ******  ***   ***   ****   \n"
       "        ***   ***  ******  ***   ***     *****\n"
       "        ***   ***  ******  ***   ***   *** ***\n"
       "        ***   *******  *******   ***   *** ***\n"
       "        ***     ****    ****     ***    ***** \n");
printf("\n————————————————— Courage团队制作\n\n");
starline();
midprt(" 定时关机 ");
midprt(" WIFI密码查看器 ");
midprt(" 随机数生成器 ");
midprt(" 文本加密/解密 ");
midprt(" 排列组合计算器 ");
midprt("鼠标连点器");
starline();
printf("\n请输入序号来选择小工具(输入任意非数字退出程序):");
while(scanf("%d",&no) == 1) //当成功读取一个数时
 {
	fgets(clean,1024,stdin);//进入小工具前清空缓冲区
    switch(no)
    {
	case 1: one(); fgets(clean, 1024, stdin); goto a; //退出小程序时清空缓冲区
	case 2: two(); fgets(clean, 1024, stdin); goto a;
	case 3: three(); fgets(clean, 1024, stdin); goto a;
	case 4: four(); fgets(clean, 1024, stdin); goto a;
	case 5: five(); fgets(clean, 1024, stdin); goto a;
	case 6: six(); fgets(clean, 1024, stdin); goto a;
	default: printf("请输入数字1-5(输入任意非数字退出程序):");
    }
 }
printf("感谢使用，再见！\n");
system("pause"); //程序暂停到结束语
return 0;
}