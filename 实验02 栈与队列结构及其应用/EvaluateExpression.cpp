//6.	计算用户输入的后缀表达式的值：例如52 + 3 * 。输入的表达式中数字为一位整数即可。
#include"Stack.h"


void EvaluateExpression()
{
    LinkStack S;
    InitStack(S);
    int operand1, operand2, result;
    char ch;

    cout << "请输入后缀表达式（以#结束，例如93+2*#）: ";

    while (cin >> ch && ch != '#')
    {
        if (isdigit(ch))// 一个区分输入的是否为数字的一个库函数
        {
            StackPush(S, ch - '0'); // 将字符转换为整数并压入栈中
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
                cout << "无效的运算符: " << ch << endl;
                exit (-1);
            }
            StackPush(S, result);
        }
    }

    StackPop(S, result);
    cout << "算好喽，结果是：" << result;
}