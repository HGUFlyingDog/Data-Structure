#include"Sequential Stack.h"

//1.	采用顺序存储结构表示抽象数据类型栈，并实现栈的初始化、入栈、出栈等各种操作。
//2. * 采用链式存储结构表示栈并实现栈的初始化、入栈、出栈等各种操作。

//顺序栈的初始化
Status InitStack(SqStack& S)
{
	S.base = new SDatatype[MAXSSIZE];
	S.stacksize = MAXSSIZE;
	S.top = 0;
	return OK;
}
Status StackPush(SqStack& S, SDatatype e)
{
	if (S.top==S.stacksize)
	{
		cout << "满辣，不要再加了(ㄒoㄒ)" << endl;
	}
	S.base[S.top++] = e;

	return OK;
}

Status StackPop(SqStack& S)
{
	cout << S.base[--S.top] << "已经出来喽~(✪ω✪)"<<endl;
	return OK;
}

Status StackTraverse(SqStack S)
{
	for (int i = 0; i <S.top; ++i)
		cout << S.base[i] << " ";

	cout << endl;
	return OK;
}