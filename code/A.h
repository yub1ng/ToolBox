#define _A_H
int A(int m,int n)    //���������� A,��m��n
 {
   int i,res;
   res = 1;
   for(i=m;i>m-n;i--)
   res *= i;
   return res;//���ؽ��
 }