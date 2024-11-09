//5.	实现对用户输入的十进制数转化成其他进制并输出
#include"stack.h"
void conversion(int N,int num)
{
	LinkStack S;
	InitStack(S);
	int e;
	while (N)
	{
		StackPush(S, N % num);
		N = N / num;
	}
	
	while (!StackEmpty(S))
	{
		StackPop(S,e);
		cout << e;
	}
}