#define _four_H
#include"lock.h"
#include"unlock.h"
//�ļ�����/����С����
//Ϊʲô�˴�û�м�C��A�Ķ���ȴ����ʾ�� goto C.h
void four(void)
{
char ch,clean[1024]; //ch�����ж���źͽ�����clean������ջ�����,��Ϊfflush(stdin)����ֵ�Բ���
system("cls");//����
printf("\n");
midprt("�ı�����/����");
printf("\n");
starline();
midprt("�ı�����(�������D:\\in.txt,������lock.txt)");
midprt("�ı�����(�������D:\\lock.txt,������unlock.txt");
 starline();
 printf("���������ִ��С����(����b�������˵�):");
 while((ch = getchar()) != 'b') //'b'�˳�С����
 {
  switch(ch)
  {
   case '1':lock();printf("���ܽ���!\n�����Լ���������Ż�������b�������˵�:"); fgets(clean,1024,stdin); continue;
   case '2':unlock();printf("���ܽ���!\n�����Լ���������Ż�������b�������˵�:"); fgets(clean,1024,stdin); continue;
   default :printf("�������\n�����Լ���������Ż�������b�������˵�:"); fgets(clean,1024,stdin); continue;
  }
 }
}