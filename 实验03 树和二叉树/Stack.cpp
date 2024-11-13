#include"Stack.h"

//1.	采用顺序存储结构表示抽象数据类型栈，并实现栈的初始化、入栈、出栈等各种操作。
//2. * 采用链式存储结构表示栈并实现栈的初始化、入栈、出栈等各种操作。

//顺序栈的初始化
Status InitStack(SqStack& S)
{
	S.base = new BiTree[MAXSSIZE];
	S.stacksize = MAXSSIZE;
	S.top = 0;
	return OK;
}

//顺序栈的入栈
Status StackPush(SqStack& S, BiTree e)
{
	if (S.top == S.stacksize)
	{
		cout << "满辣，不要再加了(ㄒoㄒ)" << endl;
	}
	S.base[S.top++] = e;

	return OK;
}
//顺序栈的入栈
Status StackPop(SqStack& S)
{
	cout << S.base[--S.top] << "已经出来喽~(？ω？)" << endl;
	return OK;
}
//顺序栈的遍历
Status StackTraverse(SqStack S)
{
	for (int i = 0; i < S.top; ++i)
		cout << S.base[i] << " ";

	cout << endl;
	return OK;
}

//构造一个空栈S，栈顶指针置空
Status InitStack(LinkStack& S)
{
	S = NULL;
	return OK;
}

//在栈顶插入元素e
Status StackPush(LinkStack& S, BiTree e)
{
	auto p = new StackNode;   //生成新节点
	p->data = e;    //将新节点数据域置为e
	p->next = S;    //将新节点插入栈顶
	S = p;     //修改栈顶指针为p
	return OK;
}

//删除S的栈顶元素
Status StackPop(LinkStack& S)
{
	if (S == NULL) return ERROR;
	cout << S->data << "已经出来喽~(✪ω✪)" << endl;
	auto p = S;
	S = S->next;
	delete p;
	return OK;
}

//链式栈的遍历
Status StackTraverse(LinkStack S)
{
	while (S != nullptr)
	{
		cout << S->data << "->";
		S = S->next;
	}
	cout << "NULL";
	return OK;
}

Status StackPop(LinkStack& S, BiTree& e)
{
	if (S == NULL) return ERROR;
	e = S->data;
	auto p = S;
	S = S->next;
	delete p;
	return OK;
}

bool StackEmpty(LinkStack S)
{
	if (S==nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}

}