//6.	�����û�����ĺ�׺���ʽ��ֵ������52 + 3 * ������ı��ʽ������Ϊһλ�������ɡ�
#include"Stack.h"


void EvaluateExpression()
{
    LinkStack S;
    InitStack(S);
    int operand1, operand2, result;
    char ch;

    cout << "�������׺���ʽ����#����������93+2*#��: ";

    while (cin >> ch && ch != '#')
    {
        if (isdigit(ch))// һ������������Ƿ�Ϊ���ֵ�һ���⺯��
        {
            StackPush(S, ch - '0'); // ���ַ�ת��Ϊ������ѹ��ջ��
        }
        else
        {
            StackPop(S, operand2);
            StackPop(S, operand1);
            switch (ch)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            default:
                cout << "��Ч�������: " << ch << endl;
                exit (-1);
            }
            StackPush(S, result);
        }
    }

    StackPop(S, result);
    cout << "���ඣ�����ǣ�" << result;
}