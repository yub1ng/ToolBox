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
int no; //���
char clean[1024]; //������ջ���������Ϊfflush(stdin)����ֵ�Բ���
system("color f0");
system("mode 50,25");
a:system("cls"); //��С�������ʱ�ص��˴�
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
printf("\n���������������������������������� Courage�Ŷ�����\n\n");
starline();
midprt(" ��ʱ�ػ� ");
midprt(" WIFI����鿴�� ");
midprt(" ����������� ");
midprt(" �ı�����/���� ");
midprt(" ������ϼ����� ");
midprt("���������");
starline();
printf("\n�����������ѡ��С����(��������������˳�����):");
while(scanf("%d",&no) == 1) //���ɹ���ȡһ����ʱ
 {
	fgets(clean,1024,stdin);//����С����ǰ��ջ�����
    switch(no)
    {
	case 1: one(); fgets(clean, 1024, stdin); goto a; //�˳�С����ʱ��ջ�����
	case 2: two(); fgets(clean, 1024, stdin); goto a;
	case 3: three(); fgets(clean, 1024, stdin); goto a;
	case 4: four(); fgets(clean, 1024, stdin); goto a;
	case 5: five(); fgets(clean, 1024, stdin); goto a;
	case 6: six(); fgets(clean, 1024, stdin); goto a;
	default: printf("����������1-5(��������������˳�����):");
    }
 }
printf("��лʹ�ã��ټ���\n");
system("pause"); //������ͣ��������
return 0;
}