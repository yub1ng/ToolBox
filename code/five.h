#define _five_H
#include"C.h"
#include"A.h"
//�������С����
void five (void)
 {
  int m, n, result;//m��n�ֱ�Ϊ�±���ϱ꣬resultΪ������  
  char ch,clean[1024]; //ch������ȡ��һ���ַ����ж�ʹ��A����C,clean������ջ�����,��Ϊfflush(stdin)����ֵ�Բ���
  system("cls");
  printf("\n");
  midprt("������ϼ�����");
  printf("\n");
  starline();
  midprt("���м���������ʽ��A m n (mΪ�±�,nΪ�ϱ�)");
  midprt("��ϼ���������ʽ��C m n (mΪ�±�,nΪ�ϱ�)");
  midprt("����b������һҳ");
  starline();
  printf("������:");
  while ((ch = getchar()) != 'b')
  {
	switch (ch) //�ж�ʹ���ĸ����㺯��
	{
	case 'A': scanf("%d%d", &m,&n);//��ȡm��n
			fgets(clean, 1024, stdin);//��ջ�����
			if (m>0 && n>0 && m>=n)//��ֵʵ��������
			printf("%d\n", result = A(m, n));
			else printf("m��n��ֵ����,");
			printf("���ٴ�����:");
			continue;
	case 'C': scanf("%d%d",&m,&n);//��ȡm��n
			fgets(clean, 1024, stdin);//��ջ�����
			if (m>0 && n>0 && m>=n)//��ֵʵ��������
			printf("%d\n", result = C(m, n));
			else printf("m��n��ֵ����,");
			printf("���ٴ�����:");
			continue;
			
	default: printf("�������,���ٴ�����:"); 
			continue;
	}
  }
 }