//调用函数
#include"Queue.h"
#include"Stack.h"

Status QueueTest()
{
	cout << "顺序队列测试部分：" << endl;
	Queue Q;
	InitQueue(Q);
	QueueTraverse(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);
	EnQueue(Q, 8);
	DeQueue(Q);
	QueueTraverse(Q);
	return OK;
}

Status QueueTest_Link()
{
	cout << "链式队列测试部分：" << endl;
	LinkQueue Q;
	InitQueue(Q);
	//QueueTraverse(Q);
	EnQueue(Q, 5);
	EnQueue(Q, 6);
	EnQueue(Q, 7);
	EnQueue(Q, 8);
	DeQueue(Q);
	QueueTraverse(Q);

	return OK;
}

Status SqStackTest()
{
	SqStack  S;
	InitStack(S);
	StackPush(S, 5);
	StackPush(S, 4);
	StackPush(S, 3);
	StackPush(S, 2);

	StackPop(S);

	StackTraverse(S);
	return OK;
}

Status SqStackTest_Link()
{
	SqStackTest();
	cout << endl;
	cout << endl;
	cout << endl;
	LinkStack S;
	InitStack(S);
	StackPush(S, 5);
	StackPush(S, 4);

	StackPop(S);

	StackTraverse(S);
	return OK;
}

void displayMenu()
{
	cout << "请选择一个选项：" << endl;
	cout << "1. 顺序队列测试" << endl;
	cout << "2. 链式队列测试" << endl;
	cout << "3. 顺序栈测试" << endl;
	cout << "4. 链式栈测试" << endl;
	cout << "5. 打印杨辉三角形" << endl;
	cout << "6. 进制转换" << endl;
	cout << "7. 后缀表达式求值" << endl;
	cout << "0. 退出" << endl;
}

int main()
{
	int choice;
	do
	{
		displayMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			QueueTest();
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 2:
			QueueTest_Link();
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 3:
			SqStackTest();
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 4:
			SqStackTest_Link();
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 5:
		{
			int numRows;
			cout << "请输入杨辉三角形的行数: ";
			cin >> numRows;
			PrintYangHuiTriangle(numRows);
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		}
		case 6:
		{
			int N, num;
			cout << "请输入要转换的数字: ";
			cin >> N;
			cout << "请输入进制: ";
			cin >> num;
			conversion(N, num);
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		}
		case 7:
			EvaluateExpression();
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 0:
			cout << "退出程序" << endl;
			break;
		default:
			cout << "无效的选项，请重新选择" << endl;
		}
	} while (choice != 0);

	return 0;
}