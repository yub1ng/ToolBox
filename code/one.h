#define _one_H
void midprt(char words[]);
void starline(void);
void one(void)
{
		int hour, min;
		char shutdown[20] = "shutdown -s -t ", time[10] = "0";
		char ch,clean[1024]; //ch������ȡgetchar����ֵ��clean������ջ�����,��Ϊfflush(stdin)����ֵ�Բ���
	a: system("cls");
		printf("\n");
		midprt("��ʱ�ػ�");
		printf("\n");
		starline();
		midprt("�趨����ʱ�ػ�");
		midprt("ȡ����ʱ�ػ�");
		midprt("����b�������˵�");
		starline();
		printf("\n\n���������:");
		while ((ch = getchar()) != 'b')//����ֵ��飬b�˳�С����
		{
			fgets(clean, 1024, stdin);//��ջ�����
			switch (ch)
			{
			case '1':
				system("cls");//����
				printf("�����뵹��ʱ(Сʱ:����)(��������ַ�����һ��):");
				while (scanf("%d:%d", &hour, &min) == 2)//����ֵ���
				{
					fgets(clean, 1024, stdin); //��ջ�����
					if (hour>24 || hour<0 || min>60 || min<0 )
						printf("�������,�����Լ�������:");
					else
					{
						_itoa_s(3600 * hour + 60 * min, time, 10, 10);//������ת��Ϊ�ַ���
						system(strcat(shutdown, time));//stract��time�ַ���������shutdown�ַ�����һ��������dos
						printf("���!,�������ٴ�����:");
						break;
					}
				}
				fgets(clean, 1024, stdin); //��ջ�����
				goto a;//�ص�С���߿�ʼ
			case '2':
				system("shutdown -a");
				printf("ȡ���ɹ�!�����Լ�������:");
				continue;
			default:	printf("�������,����������:");
			}
		}
}