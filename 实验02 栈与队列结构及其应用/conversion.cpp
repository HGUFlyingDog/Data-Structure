//5.	ʵ�ֶ��û������ʮ������ת�����������Ʋ����
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