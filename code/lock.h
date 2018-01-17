#define _lock_H
void lock (void)
{
FILE *fp1, *fp2; //fp1为输入文件指针，fp2为输出文件指针
char txt[1024];//将数组中每个字符依次处理
int n;
if ((fp1 = fopen("D:\\in.txt", "r")) == NULL) { printf("打开文件错误,"); goto end; }//返回值检查，若打开错误则定位到结束
fgets(txt,1024,fp1);//将in.txt读取至字符串
fclose(fp1);//关闭in.txt文件
for (n = 0; n < 1024; n++)//依次处理单个字符
{
	txt[n]++;
}
if ((fp2 = fopen("D:\\lock.txt", "a+")) == NULL) { printf("创建文件错误,"); goto end;}//返回值检查，若打开错误则定位到结束
fputs(txt,fp2);//将字符串内容输出至lock.txt
fclose(fp2);//关闭lock.txt文件
end: ; //结束标记，空语句
}