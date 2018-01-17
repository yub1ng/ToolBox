#define _five_H
#include"C.h"
#include"A.h"
//排列组合小工具
void five (void)
 {
  int m, n, result;//m，n分别为下标和上标，result为计算结果  
  char ch,clean[1024]; //ch用来读取第一个字符，判断使用A还是C,clean用来清空缓冲区,因为fflush(stdin)可移值性不好
  system("cls");
  printf("\n");
  midprt("排列组合计算器");
  printf("\n");
  starline();
  midprt("排列计算器，格式：A m n (m为下标,n为上标)");
  midprt("组合计算器，格式：C m n (m为下标,n为上标)");
  midprt("输入b返回上一页");
  starline();
  printf("请输入:");
  while ((ch = getchar()) != 'b')
  {
	switch (ch) //判断使用哪个计算函数
	{
	case 'A': scanf("%d%d", &m,&n);//读取m和n
			fgets(clean, 1024, stdin);//清空缓冲区
			if (m>0 && n>0 && m>=n)//数值实际意义检查
			printf("%d\n", result = A(m, n));
			else printf("m或n的值有误,");
			printf("请再次输入:");
			continue;
	case 'C': scanf("%d%d",&m,&n);//读取m和n
			fgets(clean, 1024, stdin);//清空缓冲区
			if (m>0 && n>0 && m>=n)//数值实际意义检查
			printf("%d\n", result = C(m, n));
			else printf("m或n的值有误,");
			printf("请再次输入:");
			continue;
			
	default: printf("输入错误,请再次输入:"); 
			continue;
	}
  }
 }