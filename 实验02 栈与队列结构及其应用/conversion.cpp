//5.	ʵ�ֶ��û������ʮ������ת�����������Ʋ����
#include"stack.h"
void conversion(int N)
{
	LinkStack S;
	InitStack(S);
	int e;
	while (N)
	{
		StackPush(S, N % 8);
		N = N / 8;
	}
	
	while (!StackEmpty(S))
	{
		StackPop(S,e);
		cout << e;
	}
}