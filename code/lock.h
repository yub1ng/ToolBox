#define _lock_H
void lock (void)
{
FILE *fp1, *fp2; //fp1Ϊ�����ļ�ָ�룬fp2Ϊ����ļ�ָ��
char txt[1024];//��������ÿ���ַ����δ���
int n;
if ((fp1 = fopen("D:\\in.txt", "r")) == NULL) { printf("���ļ�����,"); goto end; }//����ֵ��飬���򿪴�����λ������
fgets(txt,1024,fp1);//��in.txt��ȡ���ַ���
fclose(fp1);//�ر�in.txt�ļ�
for (n = 0; n < 1024; n++)//���δ������ַ�
{
	txt[n]++;
}
if ((fp2 = fopen("D:\\lock.txt", "a+")) == NULL) { printf("�����ļ�����,"); goto end;}//����ֵ��飬���򿪴�����λ������
fputs(txt,fp2);//���ַ������������lock.txt
fclose(fp2);//�ر�lock.txt�ļ�
end: ; //������ǣ������
}