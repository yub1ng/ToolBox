#define _four_H
#include"lock.h"
#include"unlock.h"
//文件解密/加密小工具
//为什么此处没有加C和A的定义却不提示？ goto C.h
void four(void)
{
char ch,clean[1024]; //ch用来判断序号和结束，clean用来清空缓冲区,因为fflush(stdin)可移值性不好
system("cls");//清屏
printf("\n");
midprt("文本加密/解密");
printf("\n");
starline();
midprt("文本加密(将会加密D:\\in.txt,并生成lock.txt)");
midprt("文本解密(将会解密D:\\lock.txt,并生成unlock.txt");
 starline();
 printf("请输入序号执行小工具(输入b返回主菜单):");
 while((ch = getchar()) != 'b') //'b'退出小工具
 {
  switch(ch)
  {
   case '1':lock();printf("加密结束!\n您可以继续输入序号或者输入b返回主菜单:"); fgets(clean,1024,stdin); continue;
   case '2':unlock();printf("解密结束!\n您可以继续输入序号或者输入b返回主菜单:"); fgets(clean,1024,stdin); continue;
   default :printf("输入错误\n您可以继续输入序号或者输入b返回主菜单:"); fgets(clean,1024,stdin); continue;
  }
 }
}