#define _unlock_H
void unlock (void)
{
FILE *fp1, *fp2;//fp1Ϊ�����ļ�ָ�룬fp2Ϊ����ļ�ָ��
char txt[1024];//��������
int n;//�ַ������
if((fp1=fopen("D:\\lock.txt","r")) == NULL) { printf("���ļ�����,"); goto end; }//����ֵ��飬���򿪴�����λ������
fgets(txt,1024,fp1);//��lock.txt��ȡ���ַ���
fclose(fp1);//�ر�lock.txt�ļ�
for (n = 0; n < 1024; n++)//���δ������ַ�
{
	txt[n]--;
}
if ((fp2=fopen("D:\\unlock.txt","a+")) == NULL) { printf("�����ļ�����,"); goto end; }//����ֵ��飬���򿪴�����λ������
fputs(txt,fp2);//���ַ������������unlock.txt
fclose(fp2);//�ر�unlock.txt
end: ;//������ǣ������
}