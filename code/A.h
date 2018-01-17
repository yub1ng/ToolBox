#define _A_H
int A(int m,int n)    //计算排列数 A,下m上n
 {
   int i,res;
   res = 1;
   for(i=m;i>m-n;i--)
   res *= i;
   return res;//返回结果
 }