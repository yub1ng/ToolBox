#define _C_H 
int A(int m, int n); //虽然工程已经包含了有定义函数A的头文件，但在这个模块中引用需要加A的函数原型 goto four.h
int C(int m,int n)    //计算组合数C,下m上n
 {
   return A(m,n)/A(n,n);
 }