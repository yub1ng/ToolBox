//是文字居中显示并用'*'补全空位
#define _midprt_H
void midprt(char words[])
{
	int length,front,back,f,b;
	length=strlen(words);
	if(length % 2 == 0)
		front = (50 - length) / 2;
	else 
		front = (50 - length) / 2 + 1;
	back = (50 - length) / 2;
	for (f = 0;f < front; f++)
		printf("-");
	printf("%s",words);
	for (b = 0; b < back; b++)
		printf("-");
	printf("\n");
}