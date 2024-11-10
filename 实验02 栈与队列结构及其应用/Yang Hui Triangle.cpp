//7.	�ö���ʵ�ּ�������������ǵ�ǰn�С�
#include"Queue.h"

Status PrintYangHuiTriangle(int n) {
    if (n <= 0) return;

    Queue Q;
    InitQueue(Q);

    EnQueue(Q, 1); // ��һ�㣬ֻ��һ��1

    for (int i = 1; i <= n; ++i) {
        int prev = 0; // ���ڴ洢��һ���Ԫ��
        for (int j = 0; j < i; ++j) {
            int curr;
            DeQueue(Q, curr);   // ȡ����ǰԪ��
            cout << curr << " "; // ��ӡ��ǰԪ��
            int next = prev + curr; // ��ǰԪ����ǰһ��Ԫ�صĺ���Ϊ��һ���ֵ
            EnQueue(Q, next); // ����һ���ֵ���
            prev = curr;      // ����prevΪ��ǰֵ
        }
        EnQueue(Q, 1); // ÿ�����һ��ֵ����1
        cout << endl;  // ����
    }
    return OK;
}
