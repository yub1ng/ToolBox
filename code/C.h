#define _C_H 
int A(int m, int n); //��Ȼ�����Ѿ��������ж��庯��A��ͷ�ļ����������ģ����������Ҫ��A�ĺ���ԭ�� goto four.h
int C(int m,int n)    //���������C,��m��n
 {
   return A(m,n)/A(n,n);
 }