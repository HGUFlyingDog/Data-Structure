//���ú���
#include"Queue.h"
#include"Stack.h"

Status QueueTest()
{
	cout << "˳����в��Բ��֣�" << endl;
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
	cout << "��ʽ���в��Բ��֣�" << endl;
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
	cout << "��ѡ��һ��ѡ�" << endl;
	cout << "1. ˳����в���" << endl;
	cout << "2. ��ʽ���в���" << endl;
	cout << "3. ˳��ջ����" << endl;
	cout << "4. ��ʽջ����" << endl;
	cout << "5. ��ӡ���������" << endl;
	cout << "6. ����ת��" << endl;
	cout << "7. ��׺���ʽ��ֵ" << endl;
	cout << "0. �˳�" << endl;
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
			cout << "��������������ε�����: ";
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
			cout << "������Ҫת��������: ";
			cin >> N;
			cout << "���������: ";
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
			cout << "�˳�����" << endl;
			break;
		default:
			cout << "��Ч��ѡ�������ѡ��" << endl;
		}
	} while (choice != 0);

	return 0;
}