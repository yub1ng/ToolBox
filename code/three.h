#define _three_H
void three(void)
{
	int top, bot, num, n; //�Ͻ�,�½�,���������,���������������
	char ch,clean[1024]; //ch��¼scanf()�ķ���ֵ ��clean������ջ���������Ϊfflush(stdin)����ֲ�Բ���
	system("cls");//����
	printf("\n");
	midprt("�����������");
	printf("\n");
	starline();
	midprt("����b�������˵������������ַ�����:");
	starline();
	while (getchar() != 'b') //�����벻��bʱ������С����
	{
		fgets(clean, 1024, stdin);//��ջ�����
		printf("�������½�:");

		while (1) //��ȡ�½�
		{
			ch = scanf("%d",&bot);//��ȡ����ֵ
			fgets(clean, 1024, stdin); //��ջ�����
			if (ch != 1) //����ֵ���
			{
				printf("�������,����������:");
				continue; //�����д�ѭ����ȡ
			}
			else break; //�����޴�����ѭ��
		}
		printf("�������Ͻ�:");

		while (1) //��ȡ�Ͻ�
		{
			ch = scanf("%d", &top);
			fgets(clean, 1024, stdin); //��ջ�����
			if (ch != 1) //����ֵ��֤����
			{
				printf("�������,����������:");
				continue;//�����д�ѭ����ȡ
			}
			else if (top < bot)//��ֵʵ��������
			{
				printf("�Ͻ�Ӧ�����½磬����������:");
				continue; //�����д�ѭ����ȡ
			}
			else break;//�����޴�����ѭ��
		}
		printf("����������������ĸ���:");

		while (1) //��ȡ�������������
		{
			ch = scanf("%d", &num);//����ֵ���
			fgets(clean, 1024, stdin);//��ջ�����
			if (ch != 1) //����ֵ��֤����
			{
				printf("�������,����������:");
				continue;//�����д�ѭ����ȡ
			}
			else if (num <= 0)//��ֵʵ��������
			{
				printf("����Ӧ����0������������:");
				continue;//�����д�ѭ����ȡ
			}
			else break; //�����޴�����ѭ��
		}
		srand(time(NULL)); //�ṩ����α��������е�����
		for (n = 0; n < num; n++)
		{
			printf("��%d���������%d\n", n + 1, rand() % (top - bot + 1) + bot);//������������������ΧΪ[bot,top]
		}
		printf("����b�������˵��������������������ʹ��С����:");//���صھ���getchar
	}
}